#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,l,range,ans,one,zero;
    cin>>t;
    string s;
    while(t--){
    // {
        cin>>l;
        cin>>s;
        ans=0;
        one=0;
        zero=0;
        bool flag=false;
        for (ll i = 0; i < s.length() && !flag; ++i)
        {
        	if(s[i]=='0')
            {
                zero++;
                //cout<<"zero";

            }
            else
            {
                one++;
                //i++;
            }
            if(one>=zero){
            	flag=true;
            }
        }
        if(flag){
        	cout<<"YES\n";
        }
        else{
        	cout<<"NO\n";
        }
    //     range=ceil((double)s.length()/2);
    //    // cout<<range;
    //     ll i;
    //     for(i=0; i<range;){
    //         //cout<<"-";
    //         if(s[i]=='0')
    //         {
    //             zero++;
    //             i++;
    //             //cout<<"zero";

    //         }
    //         else if(s[i]=='1')
    //         {
    //             one++;
    //             i++;
    //             //cout<<"1";
    //         }
    //       //  cout<<i<<" ";
    //     }
    //     //cout<<i<<" ";
    //     //cout<<one<<"-"<<zero<<" ";
    //     if(one>=zero){
    //         cout<<"YES\n";
    //     }
    //     else{
    //     	//cout<<i<<" "<<s.length();
    //         while(i<s.length() && one<=zero)
    //         {
    //         	//cout<<"y";
    //             if(s[i]=='0')
    //             {
    //                 zero++;
    //                 //cout<<"-";
    //             }
    //             else if(s[i]=='1')
    //             {
    //                 one++;
    //                 //cout<<"-";
    //             }
    //             i++;
    //         }
    //         //cout<<one<<"-"<<zero<<" ";
    //         if(one>=zero){
    //             cout<<"YES\n";
    //         }
    //         else{
    //             cout<<"NO\n";
    //         }
    //     }
    }
    return 0;
}