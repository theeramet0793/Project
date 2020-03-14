#include<iostream>
#include"draw_map1.h"
using namespace std;
main(){
	int price=10000;
	for(int i=0;i<=14;i++){
		draw_map1(i,price);
		cout<<"\n";
	}
} 
