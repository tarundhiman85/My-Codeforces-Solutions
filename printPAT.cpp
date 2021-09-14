#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int num,n1=n;
for(int i=0; i<n; i++){
    num=n;
    for(int k=0;k<n; k++) {
        for (int j = 0; j < n1; j++) {
            if (num == 0) {
                break;
            }
            cout << num << " ";
        }
        num--;
    }
    n1--;

    cout<<"\n";
}
}
