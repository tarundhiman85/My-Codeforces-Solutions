
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<"\n";
        }
        else{
           int d=abs(a-b);
           if(d%10>0){
            cout<<d/10+1<<"\n";
           }
           else{
            cout<<d/10<<"\n";
           }
        }
    }

    return 0;
}
