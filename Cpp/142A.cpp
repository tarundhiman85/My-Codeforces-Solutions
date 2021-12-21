#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,n;
	cin>>s>>n;
	int y,x;
	vector<pair<int,int>> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < n; ++i)
	{
      //cout<<v[i].first<<"-"<<v[i].second<<" ";
		if(s>v[i].first){
			s+=v[i].second;
			continue;
		}
		else{
			s-=v[i].first;
		//	cout<<s;
		}
	}
	if(s>0){ 
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
	return 0;
}