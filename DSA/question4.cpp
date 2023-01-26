#include <iostream>  
using namespace std; 
int main(){
    int a,i;
    cout<< "Enter the first number: ";
    cin>> a;
    for ( i = 2; i < a/2; i++)
    {
        if (a%i==0)
        {
            cout<<"not prime";
            return 1;
        }
    }
    cout<<"prime";
    
}