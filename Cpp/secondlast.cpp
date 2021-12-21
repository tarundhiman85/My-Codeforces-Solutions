#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   //program to find the second last occurance
   cin>>n>>x;
   int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   int count=-1;
   for(int i=n; i>=0; i--){
       if(x==arr[i]) count++;
       if(count==1){
           cout<<i;
           break;
       }
   }
   return 0;
}
