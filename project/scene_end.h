#include<iostream>
#include<string>
using namespace std;

void scene_end(string name[],int money[],int re[], int asset[],int NumberPlayers){
	
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
	
	
   for(int i=0;i<=157;i++){cout<<"*"; }cout<<"\n";	   
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                               ***************     ****          ***     ************                                                       *\n";
   cout<<"*                                               ***************     *****         ***     **************                                                     *\n";
   cout<<"*                                               ***                 ******        ***     ***         ***                                                    *\n";
   cout<<"*                                               ***                 *** ***       ***     ***          ***                                                   *\n";
   cout<<"*                                               ***                 ***  ***      ***     ***          ***                                                   *\n";
   cout<<"*                                               ***                 ***   ***     ***     ***          ***                                                   *\n";
   cout<<"*                                               ***************     ***    ***    ***     ***          ***                                                   *\n";
   cout<<"*                                               ***************     ***     ***   ***     ***          ***                                                   *\n";
   cout<<"*                                               ***                 ***      ***  ***     ***          ***                                                   *\n";
   cout<<"*                                               ***                 ***       *** ***     ***          ***                                                   *\n";
   cout<<"*                                               ***                 ***        ******     ***          ***                                                   *\n";
   cout<<"*                                               ***                 ***         *****     ***         ***                                                    *\n";
   cout<<"*                                               ***************     ***          ****     **************                                                     *\n";
   cout<<"*                                               ***************     ***           ***     ************                                                       *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                               _______________________ TROPHY ________________________                                                      *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                  RANK      NAME      MONEY     REAL-ESTATE       ALL                                                       *\n";
   cout<<"*                                                                                                                                                            *\n";
   
   if(NumberPlayers>=1)
   cout<<"*                                      WINNER!!     1    "<<setw(8)<<name[order[0]]<<"    "<<setw(7)<<money[order[0]]<<"      "<<setw(7)<<re[order[0]]<<"      "<<setw(7)<<asset[order[0]]<<"                                                       *\n";                                                     
   else cout<<"*                                                                                                                                                            *\n";
   
   cout<<"*                                                                                                                                                            *\n";
   
   if(NumberPlayers>=2)
   cout<<"*                                                   2    "<<setw(8)<<name[order[1]]<<"    "<<setw(7)<<money[order[1]]<<"      "<<setw(7)<<re[order[1]]<<"      "<<setw(7)<<asset[order[1]]<<"                                                       *\n";                                                     
   else cout<<"*                                                                                                                                                            *\n";
   
   
   cout<<"*                                                                                                                                                            *\n";
  
  
  if(NumberPlayers>=3)
   cout<<"*                                                   3    "<<setw(8)<<name[order[2]]<<"    "<<setw(7)<<money[order[2]]<<"     "<<setw(7)<<re[order[2]]<<"      "<<setw(7)<<asset[order[2]]<<"                                                       *\n";                                                     
   else cout<<"*                                                                                                                                                            *\n";
  
  
   cout<<"*                                                                                                                                                            *\n";
  
  if(NumberPlayers>=4)
   cout<<"*                                                   4    "<<setw(8)<<name[order[3]]<<"    "<<setw(7)<<money[order[3]]<<"      "<<setw(7)<<re[order[3]]<<"      "<<setw(7)<<asset[order[3]]<<"                                                       *\n";                                                     
   else cout<<"*                                                                                                                                                            *\n";
  
  
  
   
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   cout<<"*                                                                                                                                                            *\n";
   for(int i=0;i<=157;i++){cout<<"*";}

   getch();
}
