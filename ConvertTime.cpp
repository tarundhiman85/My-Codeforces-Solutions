#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string hr,mn,sec,m;
    hr=s.substr(0,2);
    mn=s.substr(3,2);
    sec=s.substr(6,2);
    m=s.substr(9,2);
    //cout<<hr<<mn<<sec<<m;
    if(m=="AM" && hr!="12"){
        cout<<hr<<":"<<mn<<":"<<sec;
    }
    else{
        cout<<(stoi(hr)+12)%24<<":"<<mn<<":"<<sec;
    }
    return 0;
}
