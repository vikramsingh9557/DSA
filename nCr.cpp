#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n , int r){
    int num=factorial(n);
int demon=factorial(r)*factorial(n-r);
return num/demon;
}

int main(){
    int n,r;
    cout<<"enter the value of n and r : ";
    cin>>n>>r;
    cout<<"answer is "<<nCr(n,r);
    
}