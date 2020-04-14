#include<iostream>
#include"draw_map1.h"
#include"draw_map2.h"
#include"draw_map3.h"
#include"draw_map4.h"
#include"draw_map5.h"
#include"draw_map6.h"
#include"draw_map7.h"
#include"draw_map8.h"
#include"draw_map9.h"
#include"draw_map10.h"
#include"draw_map11.h"
#include"draw_map12.h"
#include"draw_map13.h"
#include"draw_map14.h"
#include"draw_map15.h"
#include"draw_map16.h"
#include"draw_map17.h"
#include"draw_map18.h"
#include"draw_map19.h"
#include"draw_map20.h"
#include"draw_map21.h"
#include"draw_map22.h"
#include"draw_map23.h"
#include"draw_map24.h"
#include"draw_character.h"
#include"check_who_is_owner.h"
#include"rerank.h"
using namespace std;


void draw_scene(string name_character[],int status[],int status_support[],int price[],int random_number,string owner[],int turn_overall,int cn,int money[],int re[],int asset[],int NumberPlayers,int poc,int cm){
    
    int random = ((rand()%15)*1000)-((rand()%15)*1000);
	if(poc==14&&random_number!=0){money[cn-1]+=random;}
	if(status_support[cm]==2&&owner[cm]!=name_character[cn-1]&&random_number!=0){money[cn-1]-=price[cm];money[check_who_is_owner(name_character,owner[cm],NumberPlayers)]+=price[cm];}
	if(status_support[cm]==3&&owner[cm]!=name_character[cn-1]&&random_number!=0){money[cn-1]-=price[cm];money[check_who_is_owner(name_character,owner[cm],NumberPlayers)]+=price[cm];}
	if(status_support[cm]==4&&owner[cm]!=name_character[cn-1]&&random_number!=0){money[cn-1]-=price[cm];money[check_who_is_owner(name_character,owner[cm],NumberPlayers)]+=price[cm];}
	rerank(money,re,asset,NumberPlayers);
	
	for(int i=0;i<=14;i++){
		    
		    cout<<" ";
		           // 1 ///////////////////////////////////
		          if(status[1]==100)draw_map_1_1(i);
		          else if(status[1]==10){(i<3)? draw_map_1_1(i):draw_character1(i,name_character[0]); }
		          else if(status[1]==20){(i<3)? draw_map_1_1(i):draw_character2(i,name_character[1]); }
		          else if(status[1]==30){(i<3)? draw_map_1_1(i):draw_character3(i,name_character[2]); }
		          else if(status[1]==40){(i<3)? draw_map_1_1(i):draw_character4(i,name_character[3]); }
		           // 2 ///////////////////////////////////
		               if(status[2]==1)draw_map_2_1(i,price[2]);
		          else if(status[2]==2)draw_map_2_2(i,price[2]);
		          else if(status[2]==3)draw_map_2_3(i,price[2]);
		          else if(status[2]==4)draw_map_2_4(i,price[2]);
		          else if(status[2]==10){(i<3)? draw_map_2_1(i,price[2]):draw_character1(i,name_character[0]); }
		          else if(status[2]==20){(i<3)? draw_map_2_1(i,price[2]):draw_character2(i,name_character[1]); }
		          else if(status[2]==30){(i<3)? draw_map_2_1(i,price[2]):draw_character3(i,name_character[2]); }
		          else if(status[2]==40){(i<3)? draw_map_2_1(i,price[2]):draw_character4(i,name_character[3]); }
		           // 3 ///////////////////////////////////
		               if(status[3]==1)draw_map_3_1(i,price[3]);
		          else if(status[3]==2)draw_map_3_2(i,price[3]);
		          else if(status[3]==3)draw_map_3_3(i,price[3]);
		          else if(status[3]==4)draw_map_3_4(i,price[3]);
		          else if(status[3]==10){(i<3)? draw_map_3_1(i,price[3]):draw_character1(i,name_character[0]); }
		          else if(status[3]==20){(i<3)? draw_map_3_1(i,price[3]):draw_character2(i,name_character[1]); }
		          else if(status[3]==30){(i<3)? draw_map_3_1(i,price[3]):draw_character3(i,name_character[2]); }
		          else if(status[3]==40){(i<3)? draw_map_3_1(i,price[3]):draw_character4(i,name_character[3]); }
		           // 4 ///////////////////////////////////
		               if(status[4]==1)draw_map_4_1(i,price[4]);
		          else if(status[4]==2)draw_map_4_2(i,price[4]);
		          else if(status[4]==3)draw_map_4_3(i,price[4]);
		          else if(status[4]==4)draw_map_4_4(i,price[4]);
		          else if(status[4]==10){(i<3)? draw_map_4_1(i,price[4]):draw_character1(i,name_character[0]); }
		          else if(status[4]==20){(i<3)? draw_map_4_1(i,price[4]):draw_character2(i,name_character[1]); }
		          else if(status[4]==30){(i<3)? draw_map_4_1(i,price[4]):draw_character3(i,name_character[2]); }
		          else if(status[4]==40){(i<3)? draw_map_4_1(i,price[4]):draw_character4(i,name_character[3]); }
                   // 5 ///////////////////////////////////
                       if(status[5]==1)draw_map_5_1(i,price[5]);
		          else if(status[5]==2)draw_map_5_2(i,price[5]);
		          else if(status[5]==3)draw_map_5_3(i,price[5]);
		          else if(status[5]==4)draw_map_5_4(i,price[5]);
		          else if(status[5]==10){(i<3)? draw_map_5_1(i,price[5]):draw_character1(i,name_character[0]); }
		          else if(status[5]==20){(i<3)? draw_map_5_1(i,price[5]):draw_character2(i,name_character[1]); }
		          else if(status[5]==30){(i<3)? draw_map_5_1(i,price[5]):draw_character3(i,name_character[2]); }
		          else if(status[5]==40){(i<3)? draw_map_5_1(i,price[5]):draw_character4(i,name_character[3]); }
		         // 6 ///////////////////////////////////
		          if(status[6]==200)draw_map_6_1(i);
		          else if(status[6]==10){(i<3)? draw_map_6_1(i):draw_character1(i,name_character[0]); }
		          else if(status[6]==20){(i<3)? draw_map_6_1(i):draw_character2(i,name_character[1]); }
		          else if(status[6]==30){(i<3)? draw_map_6_1(i):draw_character3(i,name_character[2]); }
		          else if(status[6]==40){(i<3)? draw_map_6_1(i):draw_character4(i,name_character[3]); }

		     cout<<"*\n";
	}
	
	for(int i=0;i<=13;i++){
		cout<<" ";
		         // 7 ///////////////////////////////////
                       if(status[7]==1)draw_map_7_1(i,price[7]);
		          else if(status[7]==2)draw_map_7_2(i,price[7]);
		          else if(status[7]==3)draw_map_7_3(i,price[7]);
		          else if(status[7]==4)draw_map_7_4(i,price[7]);
		          else if(status[7]==10){(i<3)? draw_map_7_1(i,price[7]):draw_character1(i,name_character[0]); }
		          else if(status[7]==20){(i<3)? draw_map_7_1(i,price[7]):draw_character2(i,name_character[1]); }
		          else if(status[7]==30){(i<3)? draw_map_7_1(i,price[7]):draw_character3(i,name_character[2]); }
		          else if(status[7]==40){(i<3)? draw_map_7_1(i,price[7]):draw_character4(i,name_character[3]); }
		         draw_map_8(i,owner);
		         draw_map_9(i,turn_overall,name_character[cn-1]);
		         draw_map_10(i,name_character,money,asset,NumberPlayers);
		         draw_map_11(i,re,asset,NumberPlayers);
	             // 12 ///////////////////////////////////
                       if(status[12]==1)draw_map_12_1(i,price[12]);
		          else if(status[12]==2)draw_map_12_2(i,price[12]);
		          else if(status[12]==3)draw_map_12_3(i,price[12]);
		          else if(status[12]==4)draw_map_12_4(i,price[12]);
		          else if(status[12]==10){(i<3)? draw_map_12_1(i,price[12]):draw_character1(i,name_character[0]); }
		          else if(status[12]==20){(i<3)? draw_map_12_1(i,price[12]):draw_character2(i,name_character[1]); }
		          else if(status[12]==30){(i<3)? draw_map_12_1(i,price[12]):draw_character3(i,name_character[2]); }
		          else if(status[12]==40){(i<3)? draw_map_12_1(i,price[12]):draw_character4(i,name_character[3]); }
		    cout<<"*\n";
	}
	
	for(int i=0;i<=14;i++){
		cout<<" ";
		         // 13 ///////////////////////////////////
                       if(status[13]==1)draw_map_13_1(i,price[13]);
		          else if(status[13]==2)draw_map_13_2(i,price[13]);
		          else if(status[13]==3)draw_map_13_3(i,price[13]);
		          else if(status[13]==4)draw_map_13_4(i,price[13]);
		          else if(status[13]==10){(i<3)? draw_map_13_1(i,price[13]):draw_character1(i,name_character[0]); }
		          else if(status[13]==20){(i<3)? draw_map_13_1(i,price[13]):draw_character2(i,name_character[1]); }
		          else if(status[13]==30){(i<3)? draw_map_13_1(i,price[13]):draw_character3(i,name_character[2]); }
		          else if(status[13]==40){(i<3)? draw_map_13_1(i,price[13]):draw_character4(i,name_character[3]); }
	           	  draw_map_14(i,owner);
		          draw_map_15(i,random_number);
		         // 16 ///////////////////////////////////
		                if(random_number==0)draw_map_16_0(i);
		          else  if(poc==1) draw_map_16_2(i);
		          else  if(poc==6) draw_map_16_3(i);
		          else  if(poc==9) draw_map_16_4(i);
		          else  if(poc==14)draw_map_16_5(i);
		          else  if(status_support[cm]==1)draw_map_16_1(i);
		          else  if(status_support[cm]==2&&owner[cm]==name_character[cn-1]){draw_map_16_7(i);}
		          else  if(status_support[cm]==2&&owner[cm]!=name_character[cn-1]){draw_map_16_6(i);}
		          else  if(status_support[cm]==3&&owner[cm]==name_character[cn-1]){draw_map_16_8(i);}
		          else  if(status_support[cm]==3&&owner[cm]!=name_character[cn-1]){draw_map_16_6(i);}
		          else  if(status_support[cm]==4&&owner[cm]==name_character[cn-1]){draw_map_16_0(i);}
		          else  if(status_support[cm]==4&&owner[cm]!=name_character[cn-1]){draw_map_16_9(i);}
		          
		          
		         // 17 ///////////////////////////////////
		                if(random_number==0)draw_map_17_0(i);
		          else  if(poc==1) draw_map_17_2(i);
		          else  if(poc==6) draw_map_17_3(i);
		          else  if(poc==9) draw_map_17_4(i);
		          else  if(poc==14)draw_map_17_5(i,random);
		          else  if(status_support[cm]==1)draw_map_17_1(i);
		          else  if(status_support[cm]==2&&owner[cm]==name_character[cn-1]){draw_map_17_7(i);}
		          else  if(status_support[cm]==2&&owner[cm]!=name_character[cn-1]){draw_map_17_6(i,cm,price,owner);}
		          else  if(status_support[cm]==3&&owner[cm]==name_character[cn-1]){draw_map_17_8(i);}
		          else  if(status_support[cm]==3&&owner[cm]!=name_character[cn-1]){draw_map_17_6(i,cm,price,owner);}
		          else  if(status_support[cm]==4&&owner[cm]==name_character[cn-1]){draw_map_17_0(i);}
		          else  if(status_support[cm]==4&&owner[cm]!=name_character[cn-1]){draw_map_17_9(i,cm,price,owner);}
		          
		          
		         // 18 ///////////////////////////////////
                       if(status[18]==1)draw_map_18_1(i,price[18]);
		          else if(status[18]==2)draw_map_18_2(i,price[18]);
		          else if(status[18]==3)draw_map_18_3(i,price[18]);
		          else if(status[18]==4)draw_map_18_4(i,price[18]);
		          else if(status[18]==10){(i<3)? draw_map_18_1(i,price[18]):draw_character1(i,name_character[0]); }
		          else if(status[18]==20){(i<3)? draw_map_18_1(i,price[18]):draw_character2(i,name_character[1]); }
		          else if(status[18]==30){(i<3)? draw_map_18_1(i,price[18]):draw_character3(i,name_character[2]); }
		          else if(status[18]==40){(i<3)? draw_map_18_1(i,price[18]):draw_character4(i,name_character[3]); }
		    cout<<"*\n";
	}
	
	for(int i=0;i<=14;i++){
		cout<<" ";
		           // 19 ///////////////////////////////////
		          if(status[19]==300)draw_map_19_1(i);
		          else if(status[19]==10){(i<3)? draw_map_19_1(i):draw_character1(i,name_character[0]); }
		          else if(status[19]==20){(i<3)? draw_map_19_1(i):draw_character2(i,name_character[1]); }
		          else if(status[19]==30){(i<3)? draw_map_19_1(i):draw_character3(i,name_character[2]); }
		          else if(status[19]==40){(i<3)? draw_map_19_1(i):draw_character4(i,name_character[3]); }
		           // 20 ///////////////////////////////////
		               if(status[20]==1)draw_map_20_1(i,price[20]);
		          else if(status[20]==2)draw_map_20_2(i,price[20]);
		          else if(status[20]==3)draw_map_20_3(i,price[20]);
		          else if(status[20]==4)draw_map_20_4(i,price[20]);
		          else if(status[20]==10){(i<3)? draw_map_20_1(i,price[20]):draw_character1(i,name_character[0]); }
		          else if(status[20]==20){(i<3)? draw_map_20_1(i,price[20]):draw_character2(i,name_character[1]); }
		          else if(status[20]==30){(i<3)? draw_map_20_1(i,price[20]):draw_character3(i,name_character[2]); }
		          else if(status[20]==40){(i<3)? draw_map_20_1(i,price[20]):draw_character4(i,name_character[3]); }
		           // 21 ///////////////////////////////////
		               if(status[21]==1)draw_map_21_1(i,price[21]);
		          else if(status[21]==2)draw_map_21_2(i,price[21]);
		          else if(status[21]==3)draw_map_21_3(i,price[21]);
		          else if(status[21]==4)draw_map_21_4(i,price[21]);
		          else if(status[21]==10){(i<3)? draw_map_21_1(i,price[21]):draw_character1(i,name_character[0]); }
		          else if(status[21]==20){(i<3)? draw_map_21_1(i,price[21]):draw_character2(i,name_character[1]); }
		          else if(status[21]==30){(i<3)? draw_map_21_1(i,price[21]):draw_character3(i,name_character[2]); }
		          else if(status[21]==40){(i<3)? draw_map_21_1(i,price[21]):draw_character4(i,name_character[3]); }
		           // 22 ///////////////////////////////////
		               if(status[22]==1)draw_map_22_1(i,price[22]);
		          else if(status[22]==2)draw_map_22_2(i,price[22]);
		          else if(status[22]==3)draw_map_22_3(i,price[22]);
		          else if(status[22]==4)draw_map_22_4(i,price[22]);
		          else if(status[22]==10){(i<3)? draw_map_22_1(i,price[22]):draw_character1(i,name_character[0]); }
		          else if(status[22]==20){(i<3)? draw_map_22_1(i,price[22]):draw_character2(i,name_character[1]); }
		          else if(status[22]==30){(i<3)? draw_map_22_1(i,price[22]):draw_character3(i,name_character[2]); }
		          else if(status[22]==40){(i<3)? draw_map_22_1(i,price[22]):draw_character4(i,name_character[3]); }
                   // 23 ///////////////////////////////////
                       if(status[23]==1)draw_map_23_1(i,price[23]);
		          else if(status[23]==2)draw_map_23_2(i,price[23]);
		          else if(status[23]==3)draw_map_23_3(i,price[23]);
		          else if(status[23]==4)draw_map_23_4(i,price[23]);
		          else if(status[23]==10){(i<3)? draw_map_23_1(i,price[23]):draw_character1(i,name_character[0]); }
		          else if(status[23]==20){(i<3)? draw_map_23_1(i,price[23]):draw_character2(i,name_character[1]); }
		          else if(status[23]==30){(i<3)? draw_map_23_1(i,price[23]):draw_character3(i,name_character[2]); }
		          else if(status[23]==40){(i<3)? draw_map_23_1(i,price[23]):draw_character4(i,name_character[3]); }
		          // 24 ///////////////////////////////////
		          if(status[24]==400)draw_map_24_1(i);
		          else if(status[24]==10){(i<3)? draw_map_24_1(i):draw_character1(i,name_character[0]); }
		          else if(status[24]==20){(i<3)? draw_map_24_1(i):draw_character2(i,name_character[1]); }
		          else if(status[24]==30){(i<3)? draw_map_24_1(i):draw_character3(i,name_character[2]); }
		          else if(status[24]==40){(i<3)? draw_map_24_1(i):draw_character4(i,name_character[3]); }

		     cout<<"*\n";
	}
	
	 cout<<" ";
	 for(int i=0;i<=155;i++){cout<<"*"; }cout<<"\n";
}
