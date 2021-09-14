#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n){
    int j=(int)sqrt(n);
    for(int i=2; i<=j; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int sum=0;
        for(int i=0; i<str.length(); i++)
        {
            sum+=(char)str[i];
        }
        if(check_prime(sum)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
