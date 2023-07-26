#include <iostream>
using namespace std;

bool binarySearch(int arr[][4],int row,int col,int target){
    int start = 0;
    int end = row*col -1;
    int mid = start +(end - start)/2;

    while (start<=end)
    {
        int rowindex = mid/col;
        int colindex = mid%col;
        if (arr[rowindex][colindex] == target )
        {
            return true;       
        }
        if (arr[rowindex][colindex] < target)
        {
            start = mid +1;
        }
        else{
            end = mid - 1;
        }
           
        mid = start +(end -start)/2;    
    }
    return false;
}

int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,9},{9,7,6,10},{10,40,68,6}};
    int row = 4;
    int col = 4;
    int target = 40;

    bool ans = binarySearch(arr,row,col,target);

    if(ans){
        cout << "found";
    }
    else{
    cout << "not found";
}
    return 0;
}