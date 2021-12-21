
#include <bits/stdc++.h>
using namespace std;
void printDigit(int n){
    int cnt=1;

    vector<int> v;
    
    while(n>10){
        if(n%10!=0){
          int h=n%10*cnt;
          v.push_back(h);
          n/=10;
          cnt=cnt*10;  
        }
        else{
            break;
        }
    }
    int h=n*cnt;
    v.push_back(h);
    
    cout<<v.size()<<"\n";
    for(auto i: v){
        cout<<i<<" ";
    }
}

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        printDigit(n);
        cout<<"\n";
    }

    return 0;
}
