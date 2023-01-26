#include <iostream>
using namespace std;
int main(){
    int n,m,a[10],b[10],c[30];
    cout<<"Enter the total number of elements in first array: ";
    cin>>n;
    cout<<"Enter the total number of elements in second array: ";
    cin>>m;
// we enter the elements in the first array...
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i<<" element of first array: ";
        cin>>a[i];
    }
// entering the elements in second array...
    cout<<"enter elements of second array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<"Enter the "<<i<<" element of second array: ";
        cin>>b[i];
    }
// we print the first array...
    cout<<"The first array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
// printing the second array...
    cout<<"The second array is: ";
    for (int i = 0; i < m; i++)
    {
        cout<<b[i]<<" ";
    }
//shifting the elements of first and second array in third array...
    cout<<endl;
    int i,j=0;
    for ( i = 0; i < n; i++,j++)
    {
    //     if(i<n){
    //         c[i]=a[i];
    //     }
    //     else {
    //         c[i]=b[j++];
    //     }
    // }
    // for (int i = 0; i < n+m; i++)
    // {
    //     cout<<c[i];
    // }
        c[i]=a[i];
    }
    for ( i = 0; i < m ; i++)
    {
        c[i+n]=b[i];
    }
// printing the third array..
    for (int i = 0; i < n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    
}

