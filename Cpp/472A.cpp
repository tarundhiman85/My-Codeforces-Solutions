
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int flag=1;
    int i;

    for (i = 2; i <= sqrt(n); i++) {
 
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;

    for(int i=4; i<n; i+=2){
        if(!(isPrime(n-i))){
            cout<<n-i<<" "<<i;
            break;
        }
    }
    return 0;
}
