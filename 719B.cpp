#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check_number(ll n){
	ll org=n;
	ll last=n%10;
	ll rem=n%10;
	while(last==rem && rem>9){
		rem=n%10;
		n/=10;
	}
	if(last!=rem) return false;
	return true;
}
int main()
{
	int t;
	ll n;
		ll ans=0;
	cin>>t;
	while(t--){
		cin>>n;
		if(n>=1 && n<=10){
			cout<<n<<"\n";
			continue;
		}
		else if(n>10 && n<=100){
			int ans=floor(n/11);
			ans+=9;
			cout<<ans<<"\n";
			continue;
		}
		else{
			ll i=100;
		
			while(i<n){
				ans+=1;
				
				i=+i;
				if(i==i*10){
					i*=10;
				}
			}
			if(check_number(n))
			{
				ans+=19;
			}
			else{
				ans+=18;
			}
		}
		cout<<ans<<"\n";
	}
  return 0;
}