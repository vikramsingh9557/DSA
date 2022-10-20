#include<iostream>
using namespace std;

	int power(){
		int a,b;
		cout<<"enter the value of a :";
		cin>>a;
		cout<<"enter the value of b :";
		cin>>b;
		int ans=1;
		
		for(int i=1;i<=b;i++){
			ans=ans*a;
		}
		return ans;
	}
	
int main()
{
	cout<<"answer is : "<<power();
	cout<<"answer is : "<<power();
	cout<<"answer is : "<<power();
}
