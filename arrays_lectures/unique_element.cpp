#include <iostream>
#include <vector>
using namespace std;
int findunique(vector<int>arr)
{
   int ans=0;
   for(int i=0;i<arr.size();i++)
   {
        ans=ans ^ arr[i];  
   }
   return ans;
}
int main()

{
  vector<int>arr{1,1,2,2,3,3,4,4,5,6,6};
  
  int answer=findunique(arr);
  cout<<"Unique element is "<<answer<<endl;
}