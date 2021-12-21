 #include<bits/stdc++.h>
 using namespace std;
 using ll = long long;
 using P = pair<ll, ll>;
 #define rep(i, n) for(ll i = 0; i < (ll)n; i++)
//It is optimal to greedily choose the cards with larger numbers.
//Simulating naively takes time, so it is good to split into cases like as follows.
 int main() {
 int a, b, c, k;
 cin >> a >> b >> c >> k;
 if(k <= a) cout << k << endl;
 else if(k <= a + b) cout << a << endl;
 else cout << a - (k - a - b) << endl;
 return 0;
}