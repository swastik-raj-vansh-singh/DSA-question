#include <iostream>
using namespace std;
int main(){
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
    // we print the original array
    cout << "The entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // finding out the element in the array having the maximum value
    int max=arr[0];
    for (int i = 0; i < n-1; i++)
    {
         if(max < arr[i+1])
        {
            max=arr[i+1];
        }
        
    }
    // printing the maximum value
    cout<<max;
    return 0;
}