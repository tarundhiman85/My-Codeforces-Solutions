#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t;
	cin>>n>>t;
	
	if(t==10){
		if(n==1){
		cout<<-1;
	    }
	    else{
		long long num=1;
		for(long long i=0;i<n-1;i++){
			cout<<1;
		}
		cout<<0;
	}
	}
	else{
		for(long long i=0;i<n;i++){
			cout<<t;
		}
	}
	return 0;
}