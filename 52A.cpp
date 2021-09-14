#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string b="hello";
	int i,j=0;
	for(i=0; i<s.size() && j<b.size(); ){
		if(s[i]==b[j])
		{
		  j++;
		  i++;
		  // cout<<j;
		}
		else{
			i++;
		}

	}
	//cout<<j;
	if(j==b.size()){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}