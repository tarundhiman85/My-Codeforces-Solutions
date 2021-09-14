#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {

    int m,n;
    cin>>n>>m;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int mx=0;
    for(int i=0; i<m; i++){
        if(arr[i]<0){
            mx+=-(arr[i]);
        }
    }
    cout<<mx;
    return 0;

}