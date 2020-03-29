#include<iostream>
#include<iomanip>
using namespace std;

void draw_map1(int i,int &price){
	 if(i==0)cout<<"***************************";
	 if(i==1)cout<<"* James Bond Island = "<<setw(10)<<price<<"  *";
	 if(i==2)cout<<"***************************";
	 if(i==3)cout<<"*                         *";
	 if(i==4)cout<<"*       /""-"----""|      *";
	 if(i==5)cout<<"*      |        """ |     *";
	 if(i==6)cout<<"*      |     """    |     *";
	 if(i==7)cout<<"*       ||"""  """ |      *";
	 if(i==8)cout<<"*      ' |      """|      *";
	 if(i==9)cout<<"*        | ""     |       *";
	if(i==10)cout<<"*~~~~~~~~~|    "  |~~~~~~~*";
	if(i==11)cout<<"*   ~~     |  "" |        *";
	if(i==12)cout<<"*        ~~'~~~~~'~~      *";
	if(i==13)cout<<"*    ~~~        ~~~~      *";
	if(i==14)cout<<"***************************";
}
