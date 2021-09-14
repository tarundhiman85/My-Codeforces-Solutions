#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {

    int k;
    cin>>k;

    int arr[12];
    for(int i=0; i<12; i++){
        cin>>arr[i];
    }
    sort(arr,arr+12);
    int cnt=0;
    int sum=0;
    for(int i=11; i>=0; i--){
        if(sum<k){
            sum+=arr[i];
            cnt++;
        }
    }
    if(sum<k){
        cout<<-1;
    }
    else{
        cout<<cnt;
    }
    return 0;

}