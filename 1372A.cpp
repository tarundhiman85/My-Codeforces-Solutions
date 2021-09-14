#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string st="";
		string zero="";
		int n;
		cin>>n;
		st=to_string(n);
		vector<string> v;
		for(int i=st.size()-1; i>0; i--){
			if(st[i]!='0'){
				v.push_back(st[i]+zero);
				st[i]='0';
			}
			zero+='0';
		}
		vector<int> vp;
		vp.push_back(stoi(st));
		for(int i=0; i<v.size(); i++){
			vp.push_back(stoi(v[i]));
		}
		cout<<vp.size()<<"\n";
		for(int i=0; i<vp.size(); i++){
			cout<<vp[i]<<" ";
		}
		cout<<"\n";
	}
}