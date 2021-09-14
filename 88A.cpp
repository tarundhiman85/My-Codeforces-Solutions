#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {

    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int each=n/k;
        if(m==0){
            cout<<0<<"\n";
        }
        else{
            if(n/k>m) cout<<m<<"\n";

        }
    }
    return 0;

}