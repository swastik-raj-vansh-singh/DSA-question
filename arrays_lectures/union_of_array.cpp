#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n,m;
    cout <<"enter the elements in the first array :";
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"enter the elements in the second array :";
    cin >> m;
    int *brr = new int(m);
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    // pushing all elements of array arr
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i]);
    }

    // pushing all elements of array brr
    for (int i = 0; i < m; i++)
    {
        ans.push_back(brr[i]);
    }

    // printing the final array
    cout << "The final array is :";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
return 0;
}