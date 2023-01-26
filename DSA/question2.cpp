#include <iostream>  
using namespace std;

int main(){
    int goal,i;
    cout<<"Enter the goal: ";
    cin>>goal;
    int sum=0;
    for(i=1;sum<=goal;i++){
        sum+=i;        
    }
    cout<<i-2;
}