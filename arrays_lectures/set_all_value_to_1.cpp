#include <cstring>
#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    char arr[] = {1,3,4,5,6};
    memset(arr, -1 , sizeof(arr));

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}
