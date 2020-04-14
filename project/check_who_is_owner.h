#include<iostream>
using namespace std;

int check_who_is_owner(string name_character[],string name,int NumberPlayers){
	for(int i=0;i<NumberPlayers;i++){
		if(name==name_character[i])
		 return i;
	}
}
