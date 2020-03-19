#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_5(int i,int &price){
        if(i==0) cout<<"*************************";
        if(i==1) cout<<"*Mysterious Wood = " <<setw(5)<<price<<"     *";
         if(i==2)cout<<"*************************";
         if(i==3)cout<<"*                        ";
         if(i==4)cout<<"*  ___     ___      ___  ";
         if(i==5)cout<<"* | - |   | - |    | - | ";
         if(i==6)cout<<"* |_-_|   |_-_|    |_-_| ";
         if(i==7)cout<<"*   |       |        |   ";
         if(i==8)cout<<"*   |       |        |   ";
         if(i==9)cout<<"*   |       |        |   ";
         if(i==10)cout<<"*  |       |        |   ";
         if(i==11)cout<<"*  |       |        |   ";
         if(i==12)cout<<"* _____________________ ";
         if(i==13)cout<<"*                        ";
}
