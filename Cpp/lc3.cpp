#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	//ll mod=10000007;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	map<ll,ll> m;
    ll n,w,wr,cnt=0;
    bool flag=false;
	while(t--){
		cin>>n>>w>>wr;
		ll arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
			m[arr[i]]++;
		}
		if(wr>=w){
			cout<<"YES\n";
		}
		else if(wr<w){
			w=w-wr;
			for (ll i = 0; i < n; ++i)
		    {
		    	if(m[arr[i]]>1){
		    		ll cnt=m[arr[i]];
			    	if(cnt%2==0){
			    		w=w-cnt*arr[i];
			    	}
			    	else{
			    		w=w-(cnt-1)*arr[i];
			    	}
			    	m[arr[i]]=0;
		          }
		          if(w<=0){
		          	flag=true;
		          	break;
		          }
		    }
		    if(flag){
		    	cout<<"YES\n";
		    }
		    else{
		    	cout<<"NO\n";
		    }
		}

	}
	return 0;
}