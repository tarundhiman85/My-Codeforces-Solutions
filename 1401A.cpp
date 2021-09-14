#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        if(n==0){
            cout<<0<<endl;
        }
        if(n-k==0){
            cout<<0<<endl;
        }
        if(n-k<0){
            cout<<abs(n-k)<<endl;
        }
        if(n-k>0){
            cout<<abs((n+k)%2)<<endl;
        }
    }
    return 0;
}
