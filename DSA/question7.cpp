// vii.	Finds the index of the largest number in an array.

#include <iostream>
using namespace std;
int main(){
    int arr[100],total;
    cout<<"Enter the total elements: ";
    cin>>total;
    for (int i = 0; i < total; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is :"<<endl;
    for (int i = 0; i < total; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"The index of max element in the array is: ";
    int max=arr[0],n,index;
    for (n = 0; n < total-1; n++)
    {
        if(max<arr[n+1]){
            max=arr[n+1];
            index=n;
        }
    }
    cout<<index+1; 
    return 0;
}