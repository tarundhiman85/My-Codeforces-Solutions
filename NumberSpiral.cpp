#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	ll y,x,ans,temp_x,temp_y;
	while(t--)
	{
		cin>>x>>y;
		if(x%2==0 && x>=y)
		{
			ans=x*x;
			ans=ans-(y-1);
			cout<<ans<<"\n";
		}
		else if(y%2!=0 && x<=y)
		{
			ans=y*y;
			ans=ans-(x-1);
			cout<<ans<<"\n";
		}
		else if(y%2==0 && y>=x){
		    ans=y*y;
	
			ans=ans-(y-1)-(y-x);
			cout<<ans<<"\n";
		}
		else{
			  ans=x*x;
			  ans=ans-(x-1)-(x-y);
			  cout<<ans<<'\n';
		}
	}
	return 0;
}