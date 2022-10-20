#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	int j;
	while(i<=n){
		while(j<=i){
			cout<<j;
			j=j+1;
		}
	}
	i=i+1;
}
