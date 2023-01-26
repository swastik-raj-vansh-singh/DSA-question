// // v.	Prints the English name of an integer from 1 to 9.
// #include <iostream>
// using namespace std;
// int main(){
// string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
// int i;
// for ( i = 0; i < 9; i++)
// {
//     cout<<arr[i]<<endl;  
// }
// return 0;
// }


// Given a number N, the task is to convert every digit of the number into words.

#include <iostream>
using namespace std;

void nameofnumber(int N){

    switch (N)
    {
    case '0':
       cout<<"zero";
        break;
    case '1':
       cout<<"one ";
        break;
    case '2':
       cout<<"two ";
        break;
    case '3':
       cout<<"three ";
        break;
    case '4':
       cout<<"four ";
        break;
    case '5':
       cout<<"five ";
        break;
    case '6':
       cout<<"six ";
        break;
    case '7':
       cout<<"seven " ;
        break;
    case '8':
       cout<<"eight ";
        break;
    case '9':
       cout<<"nine";
        break;
    default:
        break;
    }
}
int getnumber(string N){
    int len=N.length();
    for ( int i = 0; i <=len; i++)
    {
        nameofnumber(N[i]);
    
    }
    
}

int main(){
    string N;
    cout<<"Enter the string";
    cin>>N; 
    getnumber(N);
return 0;
}