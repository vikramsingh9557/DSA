#include <iostream>
using namespace std;

int main()
{
    int arr[100], target, size, i;
    cout << "enter the elements in array : ";
    cin >> size;

    // take the elements as input
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // enter the target vaule
    cout << "enter the value want to search : ";
    cin >> target;

    // search the elements in array
    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "target is found : " << target;
            break;
        }
       
    }
     if (arr[i]!=target)
    {
        cout << "target is not found :";
        
    }
}
