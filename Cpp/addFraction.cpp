#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a-b,b);
    else return gcd(b-a,a);
}

int main() {
    int x,a,y,b;
    cin>>x>>a>>y>>b;
    if(a==b){
        int lcm=a;
        int p=(lcm/a)*x;
        int q=(lcm/b)*y;
        int t=p+q;

        int dividend=gcd(lcm,t);
        t/=dividend;
        lcm/=dividend;

        cout<<t<<"/"<<lcm;
    }
    else{
        int lcm=(a*b)/gcd(a,b);
        int p=(lcm/a)*x;
        int q=(lcm/b)*y;
        int t=p+q;

        int dividend=gcd(lcm,t);
        t/=dividend;
        lcm/=dividend;

        cout<<t<<"/"<<lcm;
    }

    return 0;
}


