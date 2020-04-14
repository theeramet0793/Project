#include<iostream>
using namespace std;

void rerank(int money[],int re[],int asset[],int NumberPlayers){
	for(int i=0;i<NumberPlayers;i++){
		asset[i]=money[i]+re[i];
	}
}
