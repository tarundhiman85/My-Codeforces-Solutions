#include <bits/stdc++.h>
using namespace std;

int main()
{
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
int sum1=(x2-x1)*(x2-x1);
int sum2=(y2-y1)*(y2-y1);
cout<<(int)sqrt(sum1+sum2);
}
