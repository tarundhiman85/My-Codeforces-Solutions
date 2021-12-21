#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<int,int>> getIndexes(vector<int> arr, int n, int sum)
{
    int curr_sum, i, j,start=0;
    vector<pair<int,int>> v;

    // Pick a starting point
    for (i = 0; i < n; i++)
    {
        curr_sum=0;
        start=i;
        curr_sum = arr[i];

        // try all subarrays starting with 'i'
        for (j = i + 1; j < n; j++) {
            if (curr_sum == sum) {
                //we delete the first half
                while (curr_sum == sum && start < j) {
                    curr_sum = curr_sum - arr[start];
                    start++;
            }
            }
            curr_sum = curr_sum + arr[j];
            if (curr_sum > sum){
                v.push_back(make_pair(start,j));
                return v;
            }
        }
    }
    return v;
}
int main()
{
    int t,n,x;
    cin>>t;
    while(t--) {
        cin >> n >> x;
        vector<int> arr;
        int p,sum=0;
        for (int i = 0; i < n; ++i) {
            cin >> p;
            arr.push_back(p);
            sum+=p;
        }
        sort(arr.begin(), arr.end());
        if (arr.size() == 1) {
            if (arr[0] == x) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
                cout<<arr[0]<<" ";
                cout<<"\n";
            }
        } else {
            vector<pair<int, int>> v = getIndexes(arr, n, x);
            if (v.empty()) {
                if(sum<x){
                    cout<<"YES\n";
                    for (int i = 0; i < n; ++i) {
                        cout<<arr[i]<<" ";
                    }
                    cout<<"\n";
                }
                else {
                    cout << "NO\n";
                }
            } else {
                cout << "YES\n";
                int first = v[0].first;
                int last = v[0].second;
                //cout<<first<<"-"<<last<<"\n";
                for (int i = first; i <= last; ++i) {
                    cout << arr[i] << " ";
                }
                //cout<<"\n";
                for (int i = 0; i < n; i++) {
                    if (!(first <= i && i <= last)) cout << arr[i] << " ";

                }
                cout << "\n";
            }
        }
    }
    return 0;
}