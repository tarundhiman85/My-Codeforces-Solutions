#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,s;
	cin>>t;
	while(t--){
		cin>>m>>s;
		if(m<s){
			cout<<0<<"\n";
		}
		else{
			cout<<m/s<<"\n";
		}
	}
	return 0;
}