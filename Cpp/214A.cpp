#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {

    int m,n;
    cin>>n>>m;
    int cnt=0;
    for(int i=0; i<=(int)sqrt(n); i++){
        //cout<<i<<"\n";
        for(int j=0; j<=(int)sqrt(m); j++){
            //cout<<j<<"\n";
            if(i*i+j==n && i+j*j==m){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;

}