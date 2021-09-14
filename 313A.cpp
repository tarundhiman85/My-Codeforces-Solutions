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


void print_Array(){
	for(int i=0; i<=100; i++){
		cout<<i<<" ";
	}
	cout<<"\n";
}

void solve(){
	int n;
	cin>>n;
	if(n>=0){
		cout<<n;
		return;
	}
	string s=to_string(n);
	//convert char to integer concept
	//48==0  57==9  
	//just get the difference to get actual value
	int value1=s[s.length()-1]-'0';
	int value2=s[s.length()-2]-'0';
	if(value2>=value1){
		s.erase(s.length()-2,1);
		cout<<stoi(s);	
	}
	else{
		cout<<n/10;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	ll t=1;
    for(ll i=0; i<t; i++){
        solve();
    }
	return 0;
}

//EFFEICENT

//first delete two digits then multiply by 10 and then
//add the remainder
// int b = n / 100 ;
//         b*= 10;
//         b+= n % 10;