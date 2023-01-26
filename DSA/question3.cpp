#include <iostream>  
using namespace std; 
int main(){
    int a,b,i;
    cout<< "Enter the first number: ";
    cin>> a;
    cout<< "Enter the second number: ";
    cin>> b;
    int gcd=1;
    for (i = 1; i < b; i++)
    {
        if ((a%i==0)&&(b%i==0))
        {
            gcd=i;
        }     
    } 
    cout<<gcd;  
}