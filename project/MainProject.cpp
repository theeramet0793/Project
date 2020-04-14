#include<iostream>
#include<string>
#include<conio.h>
#include<ctime> 
#include<cstdlib> 
#include"scene_start.h"
#include"scene_input_name.h"
#include"scene_random_queue.h"   
#include"draw_mapAll.h"  
#include"where_to_go.h" 
#include"scene_end.h"
#include"manage.h"
using namespace std;
int main(){
	
   //---------------------------------
   // SCENE 1 INPUT NUMBER OF PLAYERS 
   
        p1:
        scene_start();
	 
        string choice;
        int NumberPlayers;
   
        choice=getche();
        if(choice!="2"&&choice!="3"&&choice!="4"){
        	
   	                    system("CLS");
   	                    goto p1;
   	                    
       }else{
   	                    NumberPlayers=stoi(choice);                   
            }
   
	    system("CLS");     
	    
   //----------------------------------	   
   // SCENE 2 INPUT NAME OF CHARACTERS
   
        string name_character[4]={};
        
        for(int i=0;i<=NumberPlayers;i++){
        	
        	bool check=false;
        	
        	if(i==NumberPlayers){check=true	;}
        	scene_input_name(name_character,check);
        	
        	if(i<NumberPlayers){
        		        p2:
        	        	cout<<"\nName player "<<i+1<<" : ";
        	            getline(cin,name_character[i]);
        	            if(name_character[i].size()>8)name_character[i].erase(8,100);
        	            if(name_character[i].size()==0)goto p2;
			}else getche();
			
			
        	system("CLS");
		}
   
   //----------------------------------	   
   // SCENE 3 RANDOM TURN
            srand(time(0));
            
            for(int i=0;i<=20;i++){
           	int a=rand()%NumberPlayers;
           	int b=rand()%NumberPlayers;
           	string temp=name_character[a];
           	name_character[a] = name_character[b];
           	name_character[b] = temp;
		    }
		    
           scene_random_queue(name_character);
           string continues;
           continues=getch();
           system("CLS");
           
   //----------------------------------	   
   // SCENE 4 START GAME
        int status[25]={1,100,1,1,1,1,200,1,1,1,1,1,1,1,1,1,1,1,1,300,1,1,1,1,400};
        int status_support[25]={1,100,1,1,1,1,200,1,1,1,1,1,1,1,1,1,1,1,1,300,1,1,1,1,400};
        int poc[5]={1,1,1,1,1};                                                           //( pc = position of character)
        int price[25]={0,0,20000,10000,25000,20000,0,25000,0,0,0,0,15000,10000,0,0,0,0,20000,0,25000,10000,15000,20000,0,};
        string owner[25];//owne[2]=;
        int cn=1;                                                                         //(  cn =  character number)
        int turn_overall=10;
        int re[4]={0,0,0,0};                                                              //   re = real estate
        int money[4]={100000,100000,100000,100000};
        int asset[4]={100000,100000,100000,100000};                                       //   asset = re + money
		int SkipTurn=0;                                                                     
        srand(time(0));
		   
		    do{
		    	     int cm=where_to_go(poc[cn]);                                           //(  cm = change map 1 square)
			         status[cm]=cn*10;
			      
			    if(SkipTurn!=cn){
			      	
    	        draw_scene(name_character,status,status_support,price,0,owner,turn_overall,cn,money,re,asset,NumberPlayers,poc[cn],cm);
    	              cout<<"\t\t   press enter to roll a dice : ";
    	          
    	              string mystr;
    	              mystr=getch();
    	              system("CLS");
    	                          
    	              int random_number = rand()%12+1;            
    	              
    	              status[ cm ] = status_support[cm];
    	              
    	              poc[cn] += random_number;
    	              
    	              p3:
    	              
    	              if(poc[cn]>16)money[cn-1]+=20000;                                       // pass start to get 20000 every time
    	             
    	              
					  poc[cn] %= 16;if(poc[cn]==0)poc[cn]=16;
					  
					  cm=where_to_go(poc[cn]);                                        
    	              
    	              status_support[ cm ] = status[ cm ];
    	              
    	              status[ cm ]  = cn*10;
    	            
    	              
    	        draw_scene(name_character,status,status_support,price,random_number,owner,turn_overall,cn,money,re,asset,NumberPlayers,poc[cn],cm);
        	          
        	          
        	          
      	              string command1;
      	              
      	              if(cm==6){
      	                       cout<<"\t\t   input number : ";
     	                       cin>>command1;
     	            
					  }else if(cm==1||cm==19||cm==24||status_support[cm]==4){
					          cout<<"\t\t   enter to continue : ";
					          command1=getch();
     	            
					  }else{
						      cout<<"\t\t   choose : ";
     	                      command1=getch();
					  }
					
				       int command_support=atoi(command1.c_str());
        	           int manage_control=Manage(command_support,cm, cn, status,status_support,money, re, asset, poc,owner,name_character,price,NumberPlayers);
        	           
        	           if(manage_control==1){system("CLS");goto p3; }
        	           else if(manage_control==2){SkipTurn=cn;}
        	           
     	               status[ cm ] = status_support[ cm ];
     	               
                }else{SkipTurn=0;}
     	            
     	             cn+=1;
     	             if(cn>NumberPlayers){cn=1; turn_overall-=1;}
                     system("CLS");
                 
                  
		    }while(turn_overall>0);
            
           //----------------------------------	   
           // SCENE 5  GAME FINISH
          
            system("CLS");
			scene_end(name_character,money,re,asset,NumberPlayers);
     
    return 0;
}
