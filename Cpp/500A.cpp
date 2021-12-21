#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int arr[n+1];
	for (int i = 1; i < n; ++i)
	{
		cin>>arr[i];
	}
	// for (int i = 0; i < n-1; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	int temp=0;
	if(1==t){
		cout<<"YES\n";
	}
	else{
		int i=(arr[1]+1);
		//cout<<i<<" ";
		// if(arr[i]+i==t){
		// 	cout<<"YES\n";
		// 	return 0;
		// }
		while(i<t){
			//cout<<arr[i]+(i)<<" ";
			i=arr[i]+(i);
			//cout<<i<<" ";
			if(i==t){
				break;
			}
			//cout<<i<<" ";
			//cout<<arr[i]<<"->"<<i<<" ";
		}
		//cout<<i;
		if(i==t){
			//cout<<arr[i]<<" "<<t<<" ";
			cout<<"YES\n";
		}
		else{
			//cout<<i<<" "; 
			cout<<"NO\n";
		}
    }
	return 0;
}