#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_13(int i,int &price){
	 if(i==0)cout<<"***************************";
	 if(i==1)cout<<"*  Elves Town = "<<setw(10)<<price<<"  *";
	 if(i==2)cout<<"***************************";
	 if(i==3)cout<<"*                           *";
	 if(i==4)cout<<"*        _______  /         *";
	 if(i==5)cout<<"*      /        // |        *";
	 if(i==6)cout<<"*      | (o)   / / |        *";
	 if(i==7)cout<<"*      |     /_ /  |        *";
	 if(i==8)cout<<"*     /_           |        *";
	 if(i==9)cout<<"*       |__        |        *";
	if(i==10)cout<<"*       |___      _|        *";
	if(i==11)cout<<"*           |     |         *";
	if(i==12)cout<<"*           |     |         *";
	if(i==13)cout<<"*                           *"; 
	if(i==14)cout<<"*                           *";
}
