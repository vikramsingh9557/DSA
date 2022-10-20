#include <iostream>
using namespace std;

void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }

}

void printArraay(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int even[8]={2,43,55,32,54,22,32,34};
    int odd[7]={23,44, 32, 12, 45, 22, 33,};
    swapAlternate(even,8);
    printArraay(even,8);
    cout<<endl;
    swapAlternate(odd,7);
    printArraay(odd,7);
}