#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_24(int i,int &price){
	 if(i==0)cout<<"***************************";
	 if(i==1)cout<<"* Cloned Heaven = "<<setw(9)<<price<<"  *";
	 if(i==2)cout<<"***************************";
	 if(i==3)cout<<"*  *****    ___             *";
	 if(i==4)cout<<"*   ****   |___|            *";
	 if(i==5)cout<<"*         |_____|     ****  *";
	 if(i==6)cout<<"*  ***   |       |   ****** *";
	 if(i==7)cout<<"* ****  ***********         *";
	 if(i==8)cout<<"*       ***********| )      *";
	 if(i==9)cout<<"*       ( |******* | |      *";
	if(i==10)cout<<"*       | |        | |      *";
	if(i==11)cout<<"*       | |        | |      *";
	if(i==12)cout<<"*       | |        | |      *";
	if(i==13)cout<<"*       | |        | |      *"; 
	if(i==14)cout<<"*                           *";
}
