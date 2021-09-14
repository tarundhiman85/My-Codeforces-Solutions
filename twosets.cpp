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

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll n,t;
        cin>>n;
        //finding if the array exists with sum d_2
        vector<ll> left;
        vector<ll> right;
        right.pb(n);
        for (ll i = 1; i < n; ++i)
        {
            left.pb(i);
        }
        ll sumL=(n-1)*n>>1;
        ll sumR=n;
        ll D=sumL-sumR;
        bool found=false;
        if(D&1) {
            cout<<"NO\n";
            return 0;
        }
        else if(D==0){
            found=true;
        }
        D>>=1;
        if(!found){
            ll sumToD=0;
            for(auto r= --left.end(); r>=left.begin(); --r){
                if(*r+sumToD<D) {
                    sumToD += *r;
                    right.pb(*r);
                    left.erase(r);
                }
                else if(*r+sumToD==D){
                    right.pb(*r);
                    left.erase(r);
                    found=true;
                    break;
                }
            }
        }
        if(found){
            cout<<"YES\n";
            cout<<left.size()<<nline;
            for(auto i: left) cout<<i<<" ";
            cout<<nline;
            cout<<right.size()<<nline;
            for(auto i: right) cout<<i<<" ";
            cout<<nline;
        }
        else{
            cout<<"NO\n";
        }

    return 0;
}