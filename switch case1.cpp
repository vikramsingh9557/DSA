#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the  value of a : ";
	cin>>a;
	cout<<"enter the  value of b : ";
	cin>>b;
	int op;
	cout<<"which operation you want to perform : ";
	cin>>op;
	
	switch(op){
		case 1 : cout<<"addition : "<<a+b;
		break;
		case 2 : cout<<"subtraction : "<<a-b;
		break;
		case 3 : cout<<"multiplication< "<<a*b;
		break;
		case 4 : cout<<"Mod is : "<<a%b;
		break;
		case 5 : cout<<"devide : "<<a/b;
		break;
		default: cout<<"enter valid operation";
					
					
	}
}
