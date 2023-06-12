#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int *arr = new int(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n-1;

    while(start <=  end)
    {
        if (start == end)
        {
            cout << arr[start];
        }
        else
        {
            cout << arr[start];
            cout << arr[end];
        }
        start++;
        end--;
    }
    return 0;
}