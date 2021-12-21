#include <bits/stdc++.h>
using namespace std;
void recur(int n){
    if(n==0) return;
    int r=n%2;
    recur(n/2);
    cout<<r;
}
int main()
{
    recur(10);
    return 0;
}
