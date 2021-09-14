#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
	int t,n;
	//cin>>t;
	//while(t--){
	cin>>n;
	int sum=0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sum+=arr[i];
		//cout<<sum<<" ";
	}
	//cout<<sum<<" ";
	sort(arr,arr+n,greater<int>());
	int sum1=0;
	int i=0,count=0;
	while(sum1<=sum){
		sum1+=arr[i];
		count++;
		sum-=arr[i];
		i++;
		//cout<<sum1<<"-"<<sum<<"-"<<count<<" ";
	}
	cout<<count<<"\n";
//}
	return 0;
}