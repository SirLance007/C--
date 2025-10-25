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

int op(vector<int> &ans, int idx, int n, int k, vector<int> &dp)
{
    // base case
    if (idx >= n - 1)
    {
        return 0;
    }
    if (dp[idx] != -1)
    {
        return dp[idx];
    }
    // inc
    int mini = LLONG_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (idx + i < n)
        {
            int cost = abs(ans[idx + i] - ans[idx]) + op(ans, idx + i, n, k, dp);
            mini = min(mini, cost);
        }
    }
    dp[idx] = mini;
    return dp[idx];
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> dp(n, -1);
    int result = op(ans, 0, n, k, dp);
    cout << result << endl;
}

int32_t main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
    solve();
    // }
    return 0;
}