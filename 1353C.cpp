#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n==1){
			cout<<0<<"\n";
		}
		else{
			ll ans=0;
			ll j=1;
			for (ll i = 3; i <=n; i++)
			{
				if(i%2!=0)
				{
				 ans+=((i*2)+(i-2)*2)*j;
				 j++;
			    }
			}
			cout<<ans<<"\n";
		}
	}
	return 0;
}