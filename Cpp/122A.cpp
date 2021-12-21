#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool f=false;
    cin>>n;
    int org=n;
    int arr[]={4,7,44,47,77,74,444,447,477,474,777,774,747,744};
    while(n>0 && !f){
        if((n%10==4)||(n%10==7))
        {
            n/=10;
        }
        else{
            f=true;
            continue;
        }
    }
    for(int i=0; i<14; i++){
    	if(org%arr[i]==0){
    		f=false;
    		// cout<<arr[i];
    	}
    }
    if(!f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}