#include <iostream>
using namespace std;


// formula for the divison is quitient * divisor + remainder = dividend
//                           or
//             quitient * divisor <= divident

int solve(int divident,int divisor){
    int s = 0;
    int e = abs(divident);
    int ans = 0;
    int mid = s + (e - s)/2;

    while (s <=e)
    {
        if (abs(divisor*mid) == abs(divident)){
            return mid;
        }
        if (abs(divisor*mid) > abs(divident)){
            e = mid - 1;
        }
        else{
            ans = mid;
            s =mid + 1;
        }
        mid = s + (e - s)/2;
    }
    if((divisor <0 && divident <0) || (divisor >0 && divident>0)){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){
    int divident =22;
    int divisor = -7;
    int ans =solve(divident,divisor);
    cout <<"ans is "<< ans << endl;
    return 0;
}