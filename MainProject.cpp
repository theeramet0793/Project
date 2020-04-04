#include<iostream>
#include<string>
#include"scene_start.h"
#include"scene_input_name.h"
#include"scene_random_queue.h"
#include<conio.h>
#include<dos.h>    
#include<ctime> 
#include<cstdlib> 
#include"draw_mapAll.h"  
#include"where_to_go.h" 
#include"scene_end.h"
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
        	        	cout<<"\nName player "<<i+1<<" : ";
        	            cin>>name_character[i];
        	            if(name_character[i].size()>10)name_character[i].erase(8,100);
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
        int status[25]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        int status_support[25]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        int poc[5]={1,1,1,1,1};                                                           //( pc = position of character)
        int price[25]={10000,1,1,1,100,1,1,1,1,1,1,1,1,1000,1,1,1,1590,1,1,1,1,1,1,1};
        int cn=1;                                                                         //(  cn =  character number)
        int turn_overall=1;
        int re[4]={0,0,0,0};                                                              //   re = real estate
        int money[4]={100000,100000,100000,100000};
        int asset[4];                                                                     //   asset = re + money
        //status[1]=10;
		   
		    do{
		    	  int cm=where_to_go(poc[cn]);                                           //(  cm = change map 1 square)
			      status[cm]=cn*10;
			      
    	          draw_scene(name_character,status,price,0);
    	          cout<<"\t\t   press enter to random number : ";
    	          
    	              string mystr;
    	              mystr=getch();
    	              system("CLS");
    	                          
    	              int random_number = rand()%12+1;            
    	              
    	              status[ cm ] = status_support[cm];
    	              
    	              
    	              poc[cn] += random_number;
					  poc[cn] %= 16;
					  cm=where_to_go(poc[cn]);                                        
    	              
    	              status_support[ cm ] = status[ cm ];
    	              
    	              status[ cm ]  = cn*10;
    	              
    	              draw_scene(name_character,status,price,random_number);
        	          
        	          status[ cm ] = status_support[ cm ];
        	          
      	          string command1;
        	      cout<<"\t\t   command : ";
     	          cin>>command1;
     	          
     	          cn+=1;
     	          if(cn>NumberPlayers)cn=1;
     	          
     	          if(command1=="exit")break;
       	          
                  system("CLS");
		    }while(true);
            
            
            system("CLS");
			scene_end();
     
    return 0;
}
