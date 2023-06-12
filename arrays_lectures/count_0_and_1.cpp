#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,0,1,1,1,0,0,1,1,0,0,0,0};
    int size = sizeof(arr)/4;
    cout<<size<<endl;
    int count_1 = 0;
    int count_0 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count_1++;
        }
        else 
        {
            count_0++;
        }    
    }
    cout<<"number of zeroes are "<<count_0<<endl;
    cout<<"number of zeroes are "<<count_1<<endl;

    
    return 0;
}