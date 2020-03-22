#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_22(int i,int &price){
	 if(i==0)cout<<"***************************";
	 if(i==1)cout<<"*  Mansion  = "<<setw(8)<<price<<"    *";
	 if(i==2)cout<<"***************************";
	 if(i==3)cout<<"*                         *";
	 if(i==4)cout<<"*                         *";
	 if(i==5)cout<<"*                         *";
	 if(i==6)cout<<"*           _--_          *";
	 if(i==7)cout<<"*          | [] |         *";
	 if(i==8)cout<<"*    __    | [] |   __    *";
	 if(i==9)cout<<"* __|[]|-----------|[]|__ *";
	if(i==10)cout<<"*|  |[]| []  _  [] |[]|  |*";
	if(i==11)cout<<"*|------||--|_|--||------|*";
	if(i==12)cout<<"*|---[]-----[_]-----[]---|*";
	if(i==13)cout<<"*|----------[_]----------|*";
	if(i==14)cout<<"*|___[]_____[_]_____[]___|*";
}

