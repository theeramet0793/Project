#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

void draw_map_17_0(int i){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<"                          ";
	 if(i==7)cout<<"                          ";
	 if(i==8)cout<<"                          ";
	 if(i==9)cout<<"                          ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}

void draw_map_17_1(int i){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"PLACE + 1 HOUSE(25%)      ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<"PLACE + 2 HOUSE(50%)      ";
	 if(i==7)cout<<"                          ";
	 if(i==8)cout<<" A LANDMARK   (300%)      ";
	 if(i==9)cout<<"                          ";
	if(i==10)cout<<"DMARK AFTER YOU'D 2 HOUSE)";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"DON'T DO ANYTHING         ";
	if(i==14)cout<<"                          ";
}


void draw_map_17_2(int i){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<"NUS MONEY                 ";
	 if(i==7)cout<<"                          ";
	 if(i==8)cout<<"000                       ";
	 if(i==9)cout<<"                          ";
	if(i==10)cout<<"IRST TIME )               ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}


void draw_map_17_3(int i){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<"                          ";
	 if(i==7)cout<<"AT YOU WANT TO MOVE       ";
	 if(i==8)cout<<"                          ";
	 if(i==9)cout<<" - 16                     ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}

void draw_map_17_4(int i){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<"ARRESTED !                ";
	 if(i==7)cout<<"                          ";
	 if(i==8)cout<<"1 TURN                    ";
	 if(i==9)cout<<"                          ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}

void draw_map_17_5(int i,int random){
	 
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<"                          ";
	 if(i==7)cout<<"                          ";
	 if(i==8)cout<<setw(6)<<random<<"                    ";
	 if(i==9)cout<<"                          ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
	
}


void draw_map_17_6(int i,int cm,int price[],string owner[]){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<" "<<setw(5)<<price[cm]<<" FOR "<<setw(8)<<owner[cm]<<"       ";
	 if(i==6)cout<<"                          ";
	 if(i==7)cout<<"THIS PLACE )              ";
	 if(i==8)cout<<"                          ";
	 if(i==9)cout<<"S PLACE FROM "<<setw(8)<<owner[cm]<<"     ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<" DON'T DO ANYTHING        ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}

void draw_map_17_7(int i){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<" BUY 1 HOUSE              ";
	 if(i==7)cout<<"                          ";
	 if(i==8)cout<<"                          ";
	 if(i==9)cout<<"  DON'T DO ANYTHING       ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}

void draw_map_17_8(int i){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<"                          ";
	 if(i==6)cout<<"LISH A LANDMARK           ";
	 if(i==7)cout<<"                          ";
	 if(i==8)cout<<"                          ";
	 if(i==9)cout<<"  DON'T DO ANYTHING       ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}


void draw_map_17_9(int i,int cm,int price[],string owner[]){
	 if(i==0)cout<<"__________________________";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"CATION >                  ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"                          ";
	 if(i==5)cout<<" "<<setw(5)<<price[cm]<<" FOR "<<setw(8)<<owner[cm]<<"       ";
	 if(i==6)cout<<"                          ";
	 if(i==7)cout<<"THIS PLACE                ";
	 if(i==8)cout<<"                          ";
	 if(i==9)cout<<"                          ";
	if(i==10)cout<<"                          ";
	if(i==11)cout<<"                          ";
	if(i==12)cout<<"                          ";
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}
