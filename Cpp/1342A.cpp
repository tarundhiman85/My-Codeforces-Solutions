#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	ll x,y,a,b;
	while(t--){
		cin>>x>>y>>a>>b;
		ll total=0;
		if(x>y){
			//if x is greater then y then we can swap them which 
			//ensures x is always smaller
			swap(x,y);
		}
		//because y is greater then you have to implement 
		//y-x
		total+=a*(y-x); //then we have get the difference x5 y7
		if(2*a<b){
			total+=x*(2*a);
		}
		else{
			total+=x*(b);
		}
		cout<<total<<"\n";
	}
	return 0;
}