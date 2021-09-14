#include<bits/stdc++.h>
using namespace std;
int arr[101];	
int main(){
	int t,n;
	// cin>>t;
	// while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int i=n-1,j,diff=0;
		while(i>-1){
			//cout<<"i-1 ";
			for(j=i-1; j>-1; j--)
			{
				if(arr[i]<arr[j])
				{

				 diff=arr[j]-arr[i];
				 arr[j]-=diff;
				 arr[i]+=(diff);
				 //cout<<arr[i]<<"->"<<diff<<" ";
			    }
			}
			i--;
		}
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	//}
	return 0;
}