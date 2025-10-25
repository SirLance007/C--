// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int op(vector<vector<int>> &arr, int idx, int last, vector<vector<int>> &dp)
{
    int n = arr.size();
    if (idx == n)
        return 0;

    if (dp[idx][last] != -1)
        return dp[idx][last];

    int incla = LLONG_MIN;
    int incb = LLONG_MIN;
    int inclc = LLONG_MIN;

    if (last != 0)
        incla = arr[idx][0] + op(arr, idx + 1, 0, dp);
    if (last != 1)
        incb = arr[idx][1] + op(arr, idx + 1, 1, dp);
    if (last != 2)
        inclc = arr[idx][2] + op(arr, idx + 1, 2, dp);

    dp[idx][last] = max(incla, max(incb, inclc));
    return dp[idx][last];
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> arr( n , vector<int>(3));
    for(int i = 0; i < n ; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    vector<vector<int>> dp(n+1 , vector<int>(4 , -1));
    cout << op(arr , 0 , 3 , dp) << endl;
    return;
}

int32_t main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
    return 0;
}
