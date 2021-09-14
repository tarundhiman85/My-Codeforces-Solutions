#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	ll r,b,d;
	while(t--){
	    cin>>r>>b>>d;
	    if(r>b){
            swap(r,b);
        }
        if(r*(d+1)<b){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
	}
	return 0;
}