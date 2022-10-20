#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the value of n : ";
	cin>>n;
	int note;
	cout<<"which type of note we want : ";
	cin>>note;

switch(note){
	case 500 : cout<<"the note of 500 is : "<<n/500<<endl;
//	break;
	case 200 : cout<<"the note of 200 is : "<<n/200<<endl;
//	break;
	case 100 : cout<<"the note of 100 is : "<<n/100<<endl;
//	break;
	case 50 : cout<<"the note of 50 is : "<<n/50<<endl;
//	break;
	case 20 : cout<<"the note of 20 is : "<<n/20<<endl;
//	break;
	case 10 : cout<<"the note of 10 is : "<<n/10<<endl;
//	break;
	case 5 : cout<<"the note of 5 is : "<<n/5<<endl;
//	break;
	case 2 : cout<<"the note of 2 is : "<<n/2<<endl;
//	break;
	
}
}
