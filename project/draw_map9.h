#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_9(int i,int RemainingTurn,string NowTurn){
	 if(i==0)cout<<"**************************";
	 if(i==1)cout<<" |                        ";
	 if(i==2)cout<<" |   < REMAINING TURN >   ";
	 if(i==3)cout<<" |                        ";
	 if(i==4)cout<<" |                        ";
	 if(i==5)cout<<" |           "<<setw(2)<<RemainingTurn<<"           ";
	 if(i==6)cout<<" |                        ";
	 if(i==7)cout<<" |                        ";
	 if(i==8)cout<<" |                        ";
	 if(i==9)cout<<" |                        ";
	if(i==10)cout<<" |   <  PRESENT TURN  >   ";
	if(i==11)cout<<" |                        ";
	if(i==12)cout<<" |                        ";
	if(i==13)cout<<" |        "<<setw(8)<<NowTurn<<"        ";
	if(i==14)cout<<" |                        ";
}
