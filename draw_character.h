   #include<iostream>
#include<iomanip>
using namespace std;


void draw_character1(int i,string &name){
     if(i==3)cout<<"*                         ";
	 if(i==4)cout<<"*   @@@@@@@@@@@@@         ";
	 if(i==5)cout<<"*  @@/  ~    ~ \\@@        ";
	 if(i==6)cout<<"*\\\\ @|  • |  • |@         ";
	 if(i==7)cout<<"* \\\\ |   O     |          ";
 	 if(i==8)cout<<"*  \\\\|         | "<<setw(8)<<left<<name<<" ";
	 if(i==9)cout<<"*   \\|=========|\\         ";
	if(i==10)cout<<"*    |    |•   |\\\\        ";
	if(i==11)cout<<"*    |    |•   | \\\\       ";
	if(i==12)cout<<"*    |---<>----|  \\\\      "; 
	if(i==13)cout<<"*    |....!....|          ";
	if(i==14)cout<<"*      ||   ||            ";

}


void draw_character2(int i,string &name){
         
          if(i==3)cout<<"*   (      |___          *";
          if(i==4)cout<<"*   (______|___)         *";
          if(i==5)cout<<"*  |  ^    ^  | "<<setw(8)<<left<<name<<" *";
          if(i==6)cout<<"* (|    L     |)         *";
          if(i==7)cout<<"*  |____O_____|    V     *";
          if(i==8)cout<<"*   ____| |____   /      *";
          if(i==9)cout<<"* __|    o     | /       *";
         if(i==10)cout<<"* | |    o     |/        *";
         if(i==11)cout<<"* | |    o     |         *";
         if(i==12)cout<<"* | |____o_____|         *";
         if(i==13)cout<<"*     ||   ||            *";
         if(i==14)cout<<"*     ||   ||            *";
         

}
