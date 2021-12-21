#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){

        vector<int> v;
        int n;
        cin>>n;

        int s,g; // least power and greatest power

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        //
        for(int i=0; i<n; i++){
            if(v[i]==1){
                s=i;
            }
            if(v[i]==n){
                g=i;
            }
        }


        int ls = s+1; // if we delete least element from left side
        int lg = g+1; // if we delete greatest element from left side
        int rs = n-s; // if we delete least element from right side
        int rg = n-g; // if we delete greatest element from right side


        int ans1 = max(ls,lg); // if we delete both ele from left side
        int ans2 = max(rs,rg); // if we delete both ele from right side
        int ans3 = min(ls+rg, lg+rs);       // if we delete one from either side   !!!!!!!!!!!!!!!!!!!!

        //learned how to create conditions multiple times

        int ans = min(ans1,min(ans2,ans3)); // Our ans is the minimum of the three numbers


        cout<<ans<<endl;
    }

    return 0;

}