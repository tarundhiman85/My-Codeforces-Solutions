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
    bool check(vector<int> point, vector<int> query)
    {
        // query has 3 values and point has 2 values
        double distance=0;
        int radius=query[2];
        distance=((query[0]-point[0])*(query[0]-point[0])+(query[1]-point[1])*(query[1]-point[1]));
        distance=sqrt(distance);
        if(distance<=radius) return true;
        return false;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        //storing distance of every points with every circle?
        //iterating every circle
        vector<int> answer;
        int no_points=0;
        for (int i = 0; i < queries.size(); i++)
        {
            no_points=0;
            for (int l = 0; l < points.size(); l++)
                    {
                        if(check(points[l], queries[i])){
                            no_points++;
                        }
                    }
            answer.push_back(no_points);
        }
        return answer;
    }
int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    vector<vector<int>> points={{1,3},{3,3},{5,3},{2,2}};
    vector<vector<int>> queries={{2,3,1},{4,3,1},{1,1,2}};
    vector<int> ans=countPoints(points,queries);
    //cout<<ans.size()<<nline;
    for(auto item: ans) cout<<item<<" ";
    cout<<nline;
    return 0;
}


//class Solution {
//public:
//    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
//        //based on equation of circle x^2+y^2 <= r^2
//        vector<int> res;
//        for(vector<int> v:queries)
//        {
//            int count=0;
//            for(auto x:points)
//            {
//                int dis = (v[0]-x[0])*(v[0]-x[0]) + (v[1]-x[1])*(v[1]-x[1]);
//                if(dis<=v[2]*v[2])
//                    count++;
//            }
//            res.push_back(count);
//        }
//        return res;
//    }
//};