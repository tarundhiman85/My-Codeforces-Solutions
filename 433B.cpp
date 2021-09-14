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

ll dp[100005];    //prefix sum
ll dp2[100005];


void solve(){
   ll n,m,l,r;
   cin>>n;
   ll sum=0;
   vector<ll> cost_stone(n);
   for(ll i=0; i<n; i++){
        cin>>cost_stone[i];
        sum+=cost_stone[i];
        dp[i]=sum;
   }
   sort(cost_stone.begin(), cost_stone.end());
   sum=0;
   for(int i=0; i<n; i++){
        sum+=cost_stone[i];
        dp2[i]=sum;
   }
   cin>>m;
   int type;
   for(ll i=0; i<m; i++){
        cin>>type>>l>>r;
        if(type==1)
        {
            if((l-2)<0)
            {
                cout<<dp[r-1]<<nline;
            }
            else
            {
               cout<<dp[r-1]-dp[l-2]<<nline;   
            }
        }
    else{
        if((l-2)<0){
         cout<<dp2[r-1]<<nline;
        }
        else{
         cout<<dp2[r-1]-dp2[l-2]<<nline;
        }
    }
   }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll t=1;
    //cin>>t;
    for(ll i=0; i<t; i++){
        solve();
    }
    return 0;
}


