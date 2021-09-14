#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		unordered_map<char,int> map;
		char arr[n],x;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];  //b
		}
		vector<char> v;
		for(int i=0; i<n;){
			v.push_back(arr[i]);
			int j=i;
			while(arr[i]==arr[j] && j!=n){
				j++;
			}
			i=j;
		}
		for(int i=0; i<v.size(); i++){
			map[v[i]]++;
		}
		bool flag=false;
         for (auto i : map)
         {
         	if(i.second>1){
         		flag=true;
         	}
         }
         if(flag) cout<<"NO\n";
         else cout<<"YES\n";
	}
	return 0;
}