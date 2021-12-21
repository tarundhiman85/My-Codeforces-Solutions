#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a-b,b);
    else return gcd(b-a,a);
}
int no_factors(int n){
    int count=1;
    for(int i=1; i<=n/2; i++){
        if(n%i==0) count++;
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    int count=0;
    vector<int> v;
    for(int i=2;i<=n; i++){
        if(no_factors(i)==9){
            v.push_back(i);
            count++;
        }
    }
    cout<<count<<"\n";
    for(auto i: v){
        cout<<i<<" ";
    }
    return 0;
}


