#include <bits/stdc++.h>
using namespace std;

int main()
{
   int year,x;
   //program to find the second last occurance
   cin>>year;
   if((year%4==0)&&(year%100!=0)||(year%400==0)){
       cout<<"leap year";
   }
   else{
       cout<<"not leap year";
   }
   return 0;
}
