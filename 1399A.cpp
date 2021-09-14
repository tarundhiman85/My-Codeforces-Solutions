
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        bool flag=1;
        for(int i=1; i<n; i++){
            if(arr[i]-arr[i-1]>1){
                flag=0;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
