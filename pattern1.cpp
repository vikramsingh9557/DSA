#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1; //row
    int j=1; // col
    while (i<=n)
    {
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
    }
    i=i+1;
    

}