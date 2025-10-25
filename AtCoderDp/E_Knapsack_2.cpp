// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, W;
    cin >> n >> W;

    vector<pair<int,int>> items(n); 
    int sum_values = 0;

    for (int i = 0; i < n; i++) {
        cin >> items[i].first >> items[i].second;
        sum_values += items[i].second;
    }

    const long long INF = 1e18;
    vector<long long> dp(sum_values + 1, INF);
    dp[0] = 0; // 0 value needs 0 weight

    for (int i = 0; i < n; i++) {
        int w = items[i].first;
        int v = items[i].second;
        for (int val = sum_values; val >= v; val--) {
            dp[val] = min(dp[val], dp[val - v] + w);
        }
    }

    int ans = 0;
    for (int val = sum_values; val >= 0; val--) {
        if (dp[val] <= W) {
            ans = val;
            break;
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    fast;
    solve();
    return 0;
}
