#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t,n;
	//cin>>t;
	//while(t--){
		cin>>n;
		int count=1,max1=1;
		int arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
			int i=0,j=1;
			while(i<n && j<n){
				if(arr[i]<=arr[j]){
					count++;
					max1=max(max1,count);
					//cout<<arr[i]<<"<="<<arr[j]<<"-"<<count<<" ";
					i++;
					j++;
				}
				else{
                  count=1;
                  //cout<<"Y ";
                  i++;
                  j++;
				}
			}
	    cout<<max1<<"\n";
	//}
	return 0;
}
//effiecient in one loop
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, l(1), ml(1);
//     cin >> n;
//     int profits[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> profits[i];
//         if (i > 0)
//             if (profits[i] >= profits[i - 1])
//             {
//                 l++;
//                 ml = max(ml, l);
//             }
//             else
//                 l = 1;
//     }

//     cout << ml << endl;
//     return 0;
// }