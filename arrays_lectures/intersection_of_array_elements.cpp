#include <iostream>
#include <vector>
using namespace std;

int print_array(vector<int> ans){
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }   
}

int main(){
    
    int n;
    cout << "Enter the elements in first array ";
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout <<"Enter the elements in second array " ;
    cin >> m;
    int *brr = new int(m);
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        for (int j = 0; j < m; j++)
        {
            if (element == brr[j])
            {
                brr[j] = -1;
                ans.push_back(element);
            }
            
        }    
    }
    cout <<"the common element are: ";
    print_array(ans); 
return 0;
}

