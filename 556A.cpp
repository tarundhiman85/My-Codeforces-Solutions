/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int count(string s){
    int ones=0;
    int zeros=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') ones++;
        else zeros++;
    }
    return abs(ones-zeros);
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<count(s);
    return 0;
}
