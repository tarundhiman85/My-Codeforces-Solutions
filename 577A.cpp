#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void primeFact(ll N, vector<pair<int,int>> &v)
{
	ll org=N;
	for(ll i=2; i*i<=N; i++)
	{
		if(N%i==0)
		{
			//decrease the power of prime and also divide N
			ll cnt=0;
			while(N%i==0)
			{
				//cout<<"YES\n";
				cnt++, N/=i;
				cout<<i<<"^"<<cnt<<"\n";
				// if(i<=n && cnt<=n){
				//   v.add({i,cnt})
			 // } 
			}
		}
		if(N>1)
		{
			//surely a prime
			cout<<N<<"^"<<1<<"\n";
			//v.add({i,cnt})
		}
	}
}
int main()
{
	ll n,x;
	cin>>n>>x;
	vector<pair<int,int>> v;
	if(x==1){
		cout<<"0\n";
	}
	else
	{
	for(ll i=1; i<=n; i++)
	{
		for(ll j=1; j<=n; j++)
		{
			if(x==i*j)
			{
			cout<<"'("<<i<<"-"<<j<<")'==";
			cout<<i*j<<" ";
		    }
		    else
		    {
		    	//cout<<i<<"-"<<j<<"==";
		    	//cout<<i*j<<" ";
		    }
		}
		cout<<"\n";
	}
    }
	// ll cnt=0;
	// for(ll i=1; i*i<n; i++){
	// 	if(x%i==0){
	// 		cnt++;
	// 	}
	// }
	// cout<<cnt;
	primeFact(n,v);
	return 0;
}