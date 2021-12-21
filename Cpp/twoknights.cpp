#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll N;
	cin>>N;
	for (ll n = 1; n <=N; ++n)
	{
			ll total=(n*n)*(n*n-1)/2;
			ll actual=4*(n-1)*(n-2);
			cout<<total-actual<<"\n";
	}

	return 0;
}