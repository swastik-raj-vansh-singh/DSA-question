#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cout<<"enter the number of elements you want to enter:";
    cin >> n;

    vector<int>arr(n);
    int start = 0;

// getting user input
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
// printing the original array
    cout<<"original array is:"<<endl;
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }

    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            swap(arr[start],arr[i]);
            start++;
        } 
    }

    cout<<"after swaping"<<endl;
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    
}