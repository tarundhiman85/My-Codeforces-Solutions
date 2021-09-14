#include <bits/stdc++.h>
using namespace std;
void recur(int n){
    if(n==0) return;
    int r=n%16;
    recur(n/16);
    if(r>9 && r<16){
        cout<<(char)('A'+(r%10));
    } else{
        cout<<r;
    }
}
int main()
{
    recur(33);
    return 0;
}
