#include<bits/stdc++.h>
using namespace std;
int arr[51];
int main()
{
	int n,m;
	cin>>n>>m;
	int min1=1001;
	for (int i = 0; i <m; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m);
	// for(int i=0; i<m; i++){
	// 		cout<<arr[i]<<" ";
	// 	}
	// 	cout<<endl;
	int j=0;
	for (int i = 0; i < m && j<m-1; ++i)
	{
		    j=n+i-1;
			min1=min(min1,arr[j]-arr[i]);
			//cout<<j<<" ";
	}
	cout<<min1<<"\n";
	return 0;
}