#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_8(int i,string owner[]){
	 if(i==0)cout<<"**************************";
	 if(i==1)cout<<"*                         ";
	 if(i==2)cout<<"*     < PLACE & OWNER >   ";
	 if(i==3)cout<<"*                         ";
	 if(i==4)cout<<"* J'BOND ISLAND = "<<setw(8)<<owner[2];
	 if(i==5)cout<<"*                         ";
	 if(i==6)cout<<"* BRAAVO CITY   = "<<setw(8)<<owner[3];
	 if(i==7)cout<<"*                         ";
	 if(i==8)cout<<"* HEAVEN ARENA  = "<<setw(8)<<owner[4];
	 if(i==9)cout<<"*                         ";
	if(i==10)cout<<"* MYSTER...WOOD = "<<setw(8)<<owner[5];
	if(i==11)cout<<"*                         ";
	if(i==12)cout<<"* VOLCANO       = "<<setw(8)<<owner[7];
	if(i==13)cout<<"*                         ";
	if(i==14)cout<<"* KAME HOUSE    = "<<setw(8)<<owner[12];
}
