#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int max1=0,max2=0,overall;
	int temp1=a+b*c,temp2=a*(b+c),temp3=a*b*c,temp4=(a+b)*c;
	max1=max(temp1,temp2);
	max2=max(temp3,temp4);
	overall=max(max1,max2);
	overall=max(overall,a+b+c);
	cout<<overall;
	return 0;
}