#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		stack<char> st;
		cin>>s;
		for(int i=0; i<n; i++){
			if(s[i]=='('){
				//cout<<"2";
				st.push('(');
			}
			else if(s[i]==')' && !st.empty())
			{
					if(st.top()=='(') st.pop();
					else st.push(s[i]);
			}
			else
			{
				//cout<<"1";
				st.push(s[i]);
			}
			//cout<<i;
		}
		// cout<<s.size();
		if(!st.empty()){
			cout<<st.size()/2<<"\n";
		}
		else{
			cout<<0<<"\n";
		}
}
	return 0;
}