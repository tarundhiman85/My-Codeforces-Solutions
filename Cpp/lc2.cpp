#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	ll n,a,b;
	unordered_set<char> myset = {'E','Q','U','I','N','O','X'};
	string str;
	ll a_count=0,b_count=0;
	while(t--){
		cin>>n>>a>>b;
		a_count=0;
		b_count=0;
		while(n--){
			cin>>str;
			if(myset.count(str[0])>0){
				a_count+=a;
			}
			else{
				b_count+=b;
			}
		}
		//cout<<a_count<<"-"<<b_count;
		if(a_count==b_count){
			cout<<"DRAW\n";
		}
		else if(a_count>b_count){
			cout<<"SARTHAK\n";
		}
		else{
            cout<<"ANURADHA\n";
		}
	}
	return 0;
}