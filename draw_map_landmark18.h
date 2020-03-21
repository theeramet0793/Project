#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_18(int i,int &price){
	 if(i==0)cout<<"***************************";
	 if(i==1)cout<<"* Diamond Mines = "<<setw(9)<<price<<"  *";
	 if(i==2)cout<<"***************************";
	 if(i==3)cout<<"*                           *";
	 if(i==4)cout<<"*                           *";
	 if(i==5)cout<<"*       VVVVVVVVVVV         *";
	 if(i==6)cout<<"*       VVVVVVVVVVV         *";
	 if(i==7)cout<<"*        VVVVVVVVV          *";
	 if(i==8)cout<<"*         VVVVVVV           *";
	 if(i==9)cout<<"*           VVV             *";
	if(i==10)cout<<"*        (   V   )          *";
	if(i==11)cout<<"*      |           |        *";
	if(i==12)cout<<"*    |     _____     |      *";
	if(i==13)cout<<"*   |     |     |     |     *"; 
	if(i==14)cout<<"*                           *";
}
