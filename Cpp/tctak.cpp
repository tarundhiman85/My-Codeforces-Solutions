#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#define SIDE 3
bool rowCrossed_X(char arr[][SIDE])
{
    for (int i=0; i<SIDE; i++)
    {
        if (arr[i][0] == arr[i][1] &&
            arr[i][1] == arr[i][2] &&
            arr[i][0] != ' ' && arr[i][0]=='X')
            return (true);
    }
    return(false);
}

bool rowCrossed_O(char arr[][SIDE])
{
    for (int i=0; i<SIDE; i++)
    {
         if (arr[i][0] == arr[i][1] &&
            arr[i][1] == arr[i][2] &&
            arr[i][0] != ' ' && arr[i][0]=='O')
            return (true);
    }
    return(false);
}
bool columnCrossed_X(char arr[][SIDE])
{
    for (int i=0; i<SIDE; i++)
    {
        if (arr[0][i] == arr[1][i] &&
            arr[1][i] == arr[2][i] && 
            arr[0][i] != ' ' && arr[0][i]=='X')
            return (true);
    }
    return(false);
}
bool columnCrossed_O(char arr[][SIDE])
{
    for (int i=0; i<SIDE; i++)
    {
        if (arr[0][i] == arr[1][i] &&
            arr[1][i] == arr[2][i] && 
            arr[0][i] != ' ' && arr[0][i]=='O')
            return (true);
    }
    return(false);
}
bool diagonalCrossed_X(char arr[][SIDE])
{
    if (arr[0][0] == arr[1][1] &&
        arr[1][1] == arr[2][2] && 
        arr[0][0] != ' ' && arr[0][0]=='X')
        return(true);
          
    if (arr[0][2] == arr[1][1] &&
        arr[1][1] == arr[2][0] &&
         arr[0][2] != ' ' && arr[0][2]=='X')
        return(true);
  
    return(false);
}
bool diagonalCrossed_O(char arr[][SIDE])
{
    if (arr[0][0] == arr[1][1] &&
        arr[1][1] == arr[2][2] && 
        arr[0][0] != ' ' && arr[0][0]=='O')
        return(true);
          
    if (arr[0][2] == arr[1][1] &&
        arr[1][1] == arr[2][0] &&
         arr[0][2] != ' ' && arr[0][2]=='O')
        return(true);
  
    return(false);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
    int t;
    cin>>t;
    while(t--){
    char arr[SIDE][SIDE];
    int X_count=0;
    int O_count=0;
    int space_count=0;
    //get to know if space availbale or not
    bool space_a=false;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='_')
            {
                space_a=true;
                space_count++;
            }
            else if(arr[i][j]=='X') X_count++;
            else if(arr[i][j]=='O') O_count++;
        }
    }
    int wx=0;
    int wo=0;
     if(rowCrossed_X(arr) || columnCrossed_X(arr) || diagonalCrossed_X(arr)) wx++;
     if(rowCrossed_O(arr) || columnCrossed_O(arr) || diagonalCrossed_O(arr)) wo++;
    // debug(wo);
    // debug(wx);

    if((wx==1 && wo==1)||(X_count-O_count<0)||(X_count-O_count>1)) cout<<3<<nline;

    else if((X_count==0 && O_count==0)&&(space_count==9)) cout<<2<<nline;
    //wx=0 wo=1 
    else if(wo>wx && X_count==O_count) cout<<1<<nline;
   
    //wx=1 wo=0  and x_count>O_count
    else if(wo<wx && X_count>O_count) cout<<1<<nline;
    
    //
    else if((wx==0 && wo==0)&&(space_count==0)) cout<<1<<nline;

    //last
    else if((wx==0 && wo==0)&&(space_a)) cout<<2<<nline;

    else cout<<3<<nline;
}
return 0;
}