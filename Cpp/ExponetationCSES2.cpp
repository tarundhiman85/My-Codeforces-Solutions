#include <iostream>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
ll binaryExpo(int base, int exponent){
    if(exponent==0){
        return 1;
    }
    ll result=binaryExpo(base, exponent/2);
    if(exponent%2==1){
        return (((result*result)%mod)*base)%mod;
    }
    else{
        return (result*result)%mod;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<binaryExpo(a,binaryExpo(b,c))<<"\n";
    }
    return 0;
}
