#include <iostream>
#include<string.h>
using namespace std;

bool CheckPalindrome(char array[]){
    int i = 0 ;
    int n = strlen(array);
    int j = n-1;

    while (i<=j){
        if(array[i] != array[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    char array[100];

    cin.getline(array,100);
    cout<<CheckPalindrome(array);
    
    return 0;
}