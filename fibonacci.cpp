#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout << "enter the value of n : ";
    cin >> n;
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for (i=2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        
    }
    for (i=0; i <n; i++)
    cout << arr[i]<<" ";
}