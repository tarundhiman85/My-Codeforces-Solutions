#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {

    int n;
    cin>>n;
    if(n>1){
        if(n%4==2){
            cout<<4;
        }
        else if(n%4==3){
            cout<<2;
        }
        else if(n%4==0){
            cout<<6;
        }
        else{
            cout<<8;
        }
    }
    else{
        if(n==0) cout<<1;
        else cout<<8;
    }
    return 0;

}