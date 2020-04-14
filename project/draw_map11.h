#include<iostream>
#include<iomanip>
using namespace std;

void draw_map_11(int i,int re[],int asset[],int NumberPlayers){
	
	int order[4]={0,1,2,3};
	int asset_fake[4]={asset[0],asset[1],asset[2],asset[3]};
	 
	 for(int i=0;i<NumberPlayers-1;i++){
	 	for(int j=0;j<NumberPlayers-1;j++){
	 		if(asset_fake[j]<asset_fake[j+1]){
	 			int temp =order[j];
	 			order[j]=order[j+1];
	 			order[j+1]=temp;
	 			temp = asset_fake[j];
	 			asset_fake[j]=asset_fake[j+1];
	 			asset_fake[j+1]=temp;
			 }
			 
		 }
	 }
	
     if(i==0)cout<<"**************************";
	 if(i==1)cout<<"                          ";
	 if(i==2)cout<<"NK >                      ";
	 if(i==3)cout<<"                          ";
	 if(i==4)cout<<"   REAL-ESTATE    ALL     ";
	 if(i==5)cout<<"                          ";
	 if(i==6){
	 	if(NumberPlayers>=1)
	 	cout<<"     "<<setw(6)<<re[order[0]]<<"      "<<setw(6)<<asset[order[0]]<<"   ";
	 	else cout<<"                          ";
	 }
	 if(i==7)cout<<"                          ";
	 if(i==8){
	 	if(NumberPlayers>=2)
	 	cout<<"     "<<setw(6)<<re[order[1]]<<"      "<<setw(6)<<asset[order[1]]<<"   ";
	 	else cout<<"                          ";
	 }
	 if(i==9)cout<<"                          ";
	if(i==10){
	 	if(NumberPlayers>=3)
	 	cout<<"     "<<setw(6)<<re[order[2]]<<"      "<<setw(6)<<asset[order[2]]<<"   ";
	 	else cout<<"                          ";
	 }
	if(i==11)cout<<"                          ";
	if(i==12){
	 	if(NumberPlayers>=4)
	 	cout<<"     "<<setw(6)<<re[order[3]]<<"      "<<setw(6)<<asset[order[3]]<<"   ";
	 	else cout<<"                          ";
	 }
	if(i==13)cout<<"                          ";
	if(i==14)cout<<"                          ";
}
