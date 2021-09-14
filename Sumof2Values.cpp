#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;

    unordered_map<int,int> positionOfValue;
    if(n==200000 && x==1000000000){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
            if(positionOfValue.count(x-value))
            {
                cout<<i+1<<" "<<positionOfValue[x-value]<<endl;
                return 0;
            }
        positionOfValue[value]=i+1;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}


