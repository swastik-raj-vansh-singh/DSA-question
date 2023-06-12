#include<iostream>
#include<vector>
#include <limits.h>// for using INT_MIN/INT_MAX
using namespace std;

int main(){

    vector<int>arr{4,7,1,3,6,4};
    int minimum = arr[0];
    
    for(int i = 0 ; i<arr.size() ;i++ ){
            if (minimum > arr[i])
            {
                minimum = arr[i];
            }
        }
    cout << minimum << endl;
}