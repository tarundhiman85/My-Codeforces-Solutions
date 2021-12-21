#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}


void solve(){
    string s;
    cin>>s;
    int ok=0;
    int maybe=0;
    for(auto i : s){
        if(i=='o') ok++;
        else if(i=='?') maybe++;
    }
    int total=0;
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                for(int l=0;l<=9;l++){
                    set<int>ss;
                    if(s[i]=='x' || s[j]=='x' || s[k]=='x' || s[l]=='x') continue;
                    if(s[i]=='o') ss.insert(i);
                    if(s[j]=='o') ss.insert(j);
                    if(s[k]=='o') ss.insert(k);
                    if(s[l]=='o') ss.insert(l);
                    if((int)ss.size()==ok) total++;
                }
            }
        }
    }
    cout<<total;
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
            int t=1;
            // cin>>t;
            for(int i=1;i<=t;i++){
                solve();
    }
    return 0;
}


