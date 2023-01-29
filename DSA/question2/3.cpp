// linear serach
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
    cout<<"enter the element you want to search for: ";
    int element;
    cin>>element;

    int i,x;
    for ( i = 0; i < n; i++)
    {
        if (element==arr[i])
        {
           cout<<"Element "<<arr[i]<<" found at "<<i<<" th index"; 
           x=1;
        }
    }
    if (x!=1)
    {
        cout<<"not found";
    }
    return 0;
}