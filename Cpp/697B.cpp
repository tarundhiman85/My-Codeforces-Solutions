/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool check(int n){
    if(n<2020) return 0;
    if(n%2020==0) return 1;
    if(n%2021==0) return 1;
    else{
        int var=0;
        while(n>-1){
            if(n%2020==0 || n%2021==0){
                return 1;
            }
            else if(n%2020!=0){
                if(n<2020) return 0;
                n=n-2021;
            }
        }
    }
}

int main()
{
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       if(check(n)) cout<<"yes\n";
       else cout<<"no\n";
   }
}
