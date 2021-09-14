#include<bits/stdc++.h>
using namespace std;
#define BETWEEN(value, min, max) (value < max && value > min)
int main()
{
	int t;
	cin>>t;
	while(t--){
	int xa,ya,xb,yb,xf,yf;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xf>>yf;
    if(ya==yb && yb!=yf){
        cout<<abs(xa-xb);
    }
    else if(xa==xb && xb!=xf){
        cout<<abs(ya-yb);
    }
    else if(xa==xb && xb==xf){
        if(BETWEEN(yf,min(ya,yb),max(ya,yb))){
            cout<<abs(ya-yb)+2;
        }
        else{
            cout<<abs(ya-yb);
        }
    }
    else if(ya==yb && yb==yf){
        if(BETWEEN(xf,min(xa,xb),max(xa,xb))){
            cout<<abs(xa-xb)+2;
        }
        else{
            cout<<abs(xa-xb);
        }
    }
    else{
            cout<<abs(xa-xb)+abs(ya-yb);
    }
    cout<<"\n";
	}
	return 0;
}