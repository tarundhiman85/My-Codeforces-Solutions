#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ll n,z;
    cin>>n>>z;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    ll count=0;
    for(int i=n-1; i>=0; i--){
        while(a[i]!=0 && z!=0){
            z-=a[i];
            a[i]/=2;
            count++;
        }
    }
    if(z!=0){
        cout<<"Evacuated";
    }
    else{
        cout<<count;
    }
}