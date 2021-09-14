#include <bits/stdc++.h>
using namespace std;

int count_digits(int n){
    int count=0;
    while (n){
        n/=10;
        count++;
    }
    return count;
}
int calculateAddedValue(int n){
    int result=0;
    int decimalPlace=1;
    if(!n) return 5;
    while(n){
        if(n%10==0){
            result+=(5*decimalPlace);
        }
        n/=10;
        decimalPlace*=10;
    }
    return result;
}
int replace0with5(int number){
    number=number+calculateAddedValue(number);
    return number;
}
int main()
{
   int n;
   cin>>n;
   cout<<replace0with5(n);
//   string str=to_string(n);
//   for(int i=0; i<str.length(); i++){
//       if(str[i]=='0') str[i]='5';
//   }
//   cout<<stoi(str);

//Algorithm


//   int rem;
//   int cnt=count_digits(n);
//   int i=1;
//   int org=n;
//    while (cnt--)
//    {
//        rem=org%10;
//        if(!rem)
//        {
//            n/=i*10;
//            n*=i*10;
//            n+=5;
//        }
//        i*=10;
//        org/=10;
//    }

   return 0;
}
