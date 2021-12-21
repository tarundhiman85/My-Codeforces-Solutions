#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int minimize_pluses(string s){
    int n=s.size();
    unordered_map<int,int> umap;
    vector<int> left;
    vector<int> right;
    int i;
    for (i = 0; i < n; ++i)
    {
        if(s[i]=='=') break;
        left.push_back((int)s[i]-48);
    }
    for (int o = i+1; o < n; ++o)
    {
        right.push_back((int)s[o]-48);
    }
    i-=1;
    if(i==0) cout<<"Y";
    else{
        if(right.size()>left.size()) return -1;
        else{
            int box=0,sum=0;
            int k=left.size()-1,u=left.size()-1,j=right.size()-1;
            while(u>=0 && j>=0){
                if(left[u]==right[j] || sum==right[j]){
                    if(k==u) j--,u--,k--;
                    else if(k>u){
                        sum=0;
                        box++;
                        umap[box]=((k+1)-(u+1))+1;
                        u--;
                        k=u,j--;
                    }
                }
                else if(left[u]>right[j]) return -1;
                else
                {
                    sum+=left[u];
                    if(sum != right[j]){
                        u--;
                    }
                    if(u<0 && sum!=right[j]) return -1;
                }
            }
        }

    }
    int ans=0;
    if(!umap.empty()){
        for(auto it: umap){
            ans+=it.second-1;
        }
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<minimize_pluses(s);
    return 0;
}