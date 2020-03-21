#include<iostream>
#include<string>
#include"scene_start.h"
#include"scene_input_name.h"
#include<conio.h>
#include<dos.h>         
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
        	            if(name_character[i].size()>10)name_character[i].erase(10,100);
			}else getche();
			
			
        	system("CLS");
		}

     
     
    return 0;
}
