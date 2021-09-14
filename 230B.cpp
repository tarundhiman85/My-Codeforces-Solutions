#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int primes[1000001]={0};   //upto 10^6

int main()

{
    primes[1]=1;
    primes[2]=0;

    //intializing all the primes till 10^6
    for(int i=2;i<=1000;i++){

        if(primes[i])continue;

        for(int j=2*i;j<=1000000;j+=i){
            primes[j]=1;
        }
    }
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        long long lng;
        cin>>lng;
        //checking the sqrt of number and then asserting if it is availabe in the array
        long long sqr=sqrt(lng);
        cout<<((sqr*sqr==lng && !primes[sqr])?"YES\n":"NO\n");
    }

    return 0;
}
