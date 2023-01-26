#include <iostream>
using namespace std;

int main(){
    int n,arr[10];
    cout<<"Enter the total number of elements: ";
    cin>>n;
// we enter the elements in the array
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i<<" element: ";
        cin>>arr[i];
    }
// we print the original array
    cout<<"The entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
    // finding the duplicate value
    int i;
    for (i = 0; i < n; i++)
    {
        int counter=1;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
               counter++;
            }
        }
        if(counter>1){
            cout<<arr[i];     
        }
    }
}