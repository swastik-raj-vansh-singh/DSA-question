/*computes and returns the sum of all the integers between "first" and "last" inclusive.*/

#include <iostream>  /* A program can use any number of input or output streams*/
using namespace std; /* Namespaces are used to organize code into logical groups and to prevent name collisions that can occur     especially when your code base includes multiple libraries.*/

int main(){
    int a,b,i;
    cout<< "Enter the first number: ";
    cin>> a;
    cout<< "Enter the second number: ";
    cin>> b;
    int sum=0;
    for(i=a;i<=b;i++){
        sum+=i;
    }
    cout<< "The sum is: "<<sum;
    
    
}
