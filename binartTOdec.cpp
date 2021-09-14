#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=1000000000;
    int num=0,i=0;
    while(n){
        int r=n%10;
        num+=r*(int)(pow(2,i));
        n/=10;
        i++;
    }
    cout<<num;
    return 0;
}
