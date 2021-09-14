#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int cnt2=0,cnt3=0;
		while(n%2==0){
			cnt2++;
			n/=2;
		}
		while(n%3==0){
			cnt3++;
			n/=3;
		}
		if(n==1 && cnt2<=cnt3){
			cout<<2*cnt3-cnt2<<"\n";
		}
		else{
			cout<<-1<<"\n";
		}
	}
	return 0;
}