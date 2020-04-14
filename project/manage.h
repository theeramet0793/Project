#include<iostream>
#include<iomanip>
using namespace std;

int Manage(int command,int cm,int cn,int status[],int status_support[],int money[],int re[],int asset[],int poc[],string owner[],string name_character[],int price[],int NumberPlayers){
	
	int check=0;
	switch(status_support[cm]){
	    case 200: status[ cm ] = status_support[cm];
	              if(command>16)command=16;
	              if(command<0)command=0;
	              poc[cn] += command;
    	          check=1;
	              break;
	    case 400: check=2;
	              break;
	    case 1:  if(command==1){
	    	      status_support[cm]=2;
	    	      owner[cm]=name_character[cn-1];
	    	      money[cn-1]-=price[cm];
	    	      money[cn-1]-=price[cm]*25/100;
	    	      re[cn-1]+=((price[cm])+(price[cm]*25/100));
	    	      price[cm]+=price[cm]*25/100;
	    	      
		         }else if(command==2){
	    	      status_support[cm]=3;
	    	      owner[cm]=name_character[cn-1];
	    	      money[cn-1]-=price[cm];
	    	      money[cn-1]-=price[cm]*50/100;
	    	      re[cn-1]+=((price[cm])+(price[cm]*50/100));
	    	      price[cm]+=price[cm]*50/100;
	    	      
		         }
	             break;
	    case 2: if(owner[cm]==(name_character[cn-1])){
			     if(command==1){
			     status_support[cm]=3;
				 money[cn-1]-=price[cm]*20/100;
				 re[cn-1]+=(price[cm]*20/100);
	    	     price[cm]+=price[cm]*20/100;
				 
				 }
		        }else if(owner[cm]!=(name_character[cn-1])){
		         if(command==1){
		         	money[check_who_is_owner(name_character,owner[cm],NumberPlayers)]+=price[cm];
		         	re[check_who_is_owner(name_character,owner[cm],NumberPlayers)]-=price[cm];
		         	money[cn-1]-=price[cm];
		         	re[cn-1]+=price[cm];
		          	owner[cm]=name_character[cn-1];
				 }
				}
	             break;
	    case 3:if(owner[cm]==(name_character[cn-1])){
			     if(command==1){
			     status_support[cm]=4;
				 money[cn-1]-=price[cm]*2;
				 re[cn-1]+=price[cm]*2;
	    	     price[cm]+=price[cm]*2;	
				 }
		        }else if(owner[cm]!=(name_character[cn-1])){
		         if(command==1){
		         	money[check_who_is_owner(name_character,owner[cm],NumberPlayers)]+=price[cm];
		         	re[check_who_is_owner(name_character,owner[cm],NumberPlayers)]-=price[cm];
		         	money[cn-1]-=price[cm];
		         	re[cn-1]+=price[cm];
		          	owner[cm]=name_character[cn-1];
				 }
				}
	            break;
	    
	    
	}
	return check;
}
