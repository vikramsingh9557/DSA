#include<iostream>
using namespace std;
// 1 -> is prime
// 0 -> is not prime
bool isPrime(int n){
    if(n==1){
        return 0;
    }
    
    for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    cout<<isPrime(n);

}