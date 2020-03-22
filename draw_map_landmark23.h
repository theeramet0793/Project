#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_23(int i,int &price){
	 if(i==0)cout<<"***************************";
	 if(i==1)cout<<"* Avengers tower = "<<setw(6)<<price<<" *";
	 if(i==2)cout<<"***************************";
	 if(i==3)cout<<"*         __              *";
	 if(i==4)cout<<"*         | |             *";
	 if(i==5)cout<<"*         |  |            *";
	 if(i==6)cout<<"*         |   |_____      *";
	 if(i==7)cout<<"*         |    A____|     *";
	 if(i==8)cout<<"*         |     |         *";
	 if(i==9)cout<<"*         |    |*         *";
	if(i==10)cout<<"*         |   |***        *";
	if(i==11)cout<<"*         |  |*****       *";
	if(i==12)cout<<"*        /|  |*****       *";
	if(i==13)cout<<"*       / |  |*****       *";
	if(i==14)cout<<"*      /__|__|******      *";
}

