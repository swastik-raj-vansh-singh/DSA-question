// vi.	Reverses the order of the objects in an array.

// #include <iostream>
// using namespace std;
// int main(){
//     // int arr[]={1,2,3,4,5,6,4,5};
//     //  int len=sizeof(arr)/sizeof(arr[0]);
//     //  int lent= end(arr)-begin(arr);
//     //  int len= arr.size();
//     int total,arr[100];
//     cout<<"Enter the total elements :";
//     cin>>total;
//     cout<<"enter "<< total <<" array elements"<<endl;
//     for (int i = 0; i <total; i++)
//     {
            
//         cin>>arr[i];
        
//     }
//     cout<<"Original array is: ";
//     for (int i = 0; i < total; i++)
//     {
        
//         cout<<arr[i]<<endl;
//     }
//     cout<<"\n\nThe Reverse of Given Array is:\n";
//     for (int i = total-1; i >= 0; i--)
//         {
//             cout<<arr[i];
//         }
        
//     return 0;
// }
        
#include <iostream>
using namespace std;
int main(){
    int total,arr[100];
    cout<<"Enter the total elements :";
    cin>>total;
    cout<<"enter "<< total <<" array elements"<<endl;
    for (int i = 0; i <total; i++)
    {       
        cin>>arr[i]; 
    }
    cout<<"Original array is: ";
    for (int i = 0; i < total; i++)
    {
        
        cout<<arr[i]<<" ";
    }
    int j=total-1;
    for (int n = 0; n <= j; n++,j--)
    {
        int temp;
        temp=arr[n];
        arr[n]=arr[j];
        arr[j]=temp;
    }
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for (int n = 0; n < total; n++)
    {
        cout<<arr[n];
    }
   
    return 0;
}
