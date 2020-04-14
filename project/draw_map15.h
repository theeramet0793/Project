#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_15(int i,int random_number){
	 if(i==0)cout<<" |                        ";
	 if(i==1)cout<<" |                        ";
	 if(i==2)cout<<" |                        ";
	 if(i==3)cout<<" |                        ";
	 if(i==4)cout<<" |                        ";
	 if(i==5)cout<<" |                        ";
	 if(i==6)cout<<" |    <  ROLL A DICE  >   ";
	 if(i==7)cout<<" |                        ";
	 if(i==8)cout<<" |                        ";
	 if(i==9){
	 		 cout<<" |          ";
	         if(random_number!=0)
	         cout<<setw(2)<<random_number<<"            ";
	         else  cout<<"              ";
	 }
	 
	if(i==10)cout<<" |                        ";
	if(i==11)cout<<" |                        ";
	if(i==12)cout<<" |                        ";
	if(i==13)cout<<" |                        ";
	if(i==14)cout<<" |                        ";
}
