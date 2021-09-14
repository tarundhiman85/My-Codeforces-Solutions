#include <bits/stdc++.h>
using namespace std;
void recur(int n){
    if(n==0) return;
    int r=n%8;
    recur(n/8);
    cout<<r;
}
int main()
{
    recur(100);
    return 0;
}
