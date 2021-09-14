#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int count=0;
	for(int i=1; i<str.size(); i++){
		if((str[i]>='A' && str[i]<='Z')){
			count++;
		}
	}
	if(count==str.size()-1){
		for(int i=0; i<str.size(); i++){
		if((str[i]>='A' && str[i]<='Z')){
			str[i]+=32;
		}
		else{
			str[i]-=32;
		}
	}
	}
	cout<<str;
	return 0;
}