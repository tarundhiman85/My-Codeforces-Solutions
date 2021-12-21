#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int ans=a;
	int rem=0;
	while(a>=b)
	{
		rem+=a%b;
		a/=b;
		//cout<<a<<" ";
		ans+=a;
		if(a<b){
			a+=rem;
			rem=0;
		}
	}
	cout<<ans<<"\n";
	return 0;
}