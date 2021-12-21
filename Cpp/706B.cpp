#include<bits/stdc++.h>
using namespace std;
typedef long long ll;	
ll arr[10001];
int binarySearch(int l, int r, int x)
{
	ll count=0;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x){
			count++;
			return count;
		}
		if (arr[m] < x){
			l = m + 1;
		    count++;
		}
		else{
			r = m - 1;
		}
	}
	return -1;
}
int main()
{
	ll n,q;
	cin>>n;
	unordered_map<ll,ll> map;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		map[arr[i]]++;
	}
	sort(arr,arr+n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	cin>>q;
	ll m,count;
	for (int i = 0; i < q; ++i)
	{
		cin>>m;
		count=binarySearch(0,n-1,m);
		if(count)
		{
			if(map[m]>1)
			{
				cout<<count<<" ";
				count--;
				cout<<count<<"-"<<map[m];
				count+=map[m];
				//cout<<count;
			}
			cout<<count<<'\n';
		}
		else
		{
			cout<<0<<"\n";
		}
	}
	return 0;
}