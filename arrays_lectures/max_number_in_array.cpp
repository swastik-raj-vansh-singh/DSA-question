#include <iostream>
#include <limits.h>

using namespace std;
int main(){
    // int arr[] = {1,3,4,10,5,7,4,9};
    // int size = sizeof(arr)/4;

// better way to initialized the array
    int n;
    cout << "Enter the total number of elements: ";
    cin >> n;
    int *arr = new int[n];
    // we enter the elements in the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    }
    // int max = arr[0];

    int max = INT_MIN;
    for (int i = 0; i < n ; i++)
    {
        
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
cout<<"maximum number in the array is "<<max; 

    return 0;
}