#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,t;
cin>>t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(n<3){
            cout<<-1;
            continue;
        }
        //method 1 sort
        //sort(arr, arr+n);
        //cout<<arr[2];

        //method 2 loops
        int mn=INT_MAX;
        int idx;
        for(int i=0; i<n; i++){
            if(arr[i]<mn){
                mn=arr[i];
                idx=i;
            }
        }
        arr[idx]=INT_MAX;
        mn=INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]<mn){
                mn=arr[i];
                idx=i;
            }
        }
        arr[idx]=INT_MAX;
        mn=INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]<mn){
                mn=arr[i];
            }
        }
        cout<<mn;
        cout<<"\n";
    }
    return 0;
}
