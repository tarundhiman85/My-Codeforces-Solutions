#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,a,b;
    while(t--){
        cin>>n>>a>>b;
        for(int i=0; i<n; i++){
            cout<<char('a'+(i%b));
        }
        cout<<endl;
    }
    return 0;
}
