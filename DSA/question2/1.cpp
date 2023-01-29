// sum of all the elements in the array
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
        cout << arr[i] << "";
    }
    cout << endl;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    
    return 0;
}