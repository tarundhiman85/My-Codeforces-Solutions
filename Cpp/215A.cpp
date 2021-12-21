#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    int mx1=0;
    unordered_map<int,int> map;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(arr1[j]%arr[i]==0 && arr1[j]>=arr[i]){
                map[arr1[j]/arr[i]]++;
                if(arr1[j]/arr[i]>mx1){
                    mx1=arr1[j]/arr[i];
                }
            }
        }
    }
    cout<<map[mx1];
    return 0;

}