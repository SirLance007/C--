// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solve()
{
    vector<int> ans;
    unordered_set<int> st;
    int n;
    cin >> n;
    int mini = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(st.find(x) == st.end()){
            st.insert(x);
            ans.push_back(x);
        }
    }
    sort(ans.begin(), ans.end());
    int count = 0;
    int maxi = 0;
    for(int i = 1; i < ans.size() ; i++){
        if(ans[i] - ans[i-1] == 1){
            count++;
            maxi = max(maxi , count);
        }
        else{
            count = 0;
        }
    }
    cout << maxi+1 << endl;
    // for(int i = 0; i <= n ; i++){
    //     if(ans[i] != i){
    //         cout << i << endl;
    //         return;
    //     }
    // }
    // cout << ans[n-1]+1 << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// 0 2 3 4 5 6