#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f[n+1];
    f[0]=0;
    f[1]=1;
    int i;
    for(i=2; i<=n; i++){
        f[i]=f[i-1]+f[i-2];
    }
    cout<<f[n];
    return 0;
}
//0 is the oth fibonacci  number remember