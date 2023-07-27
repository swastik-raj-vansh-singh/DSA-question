#include <iostream>
#include <string.h>
using namespace std;

 void lowertoupper(char array[]){
    int n = strlen(array);
    for (int i = 0; i < n; i++)
    {
        array[i] = array[i] - 'a' + 'A';
        // array[i] = array[i] + 'a' - 'A';fot upper to lower
    }  
 }

int main(){
    char array[100];

    cin.getline(array,100);
    lowertoupper(array);
    cout << array;
    return 0;
}