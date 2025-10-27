// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int N;
    cin >> N;  // number of coins
    vector<double> p(N + 1);

    for (int i = 1; i <= N; i++) cin >> p[i];

    vector<double> dp(N + 1, 0.0);
    dp[0] = 1.0;  

    for (int i = 1; i <= N; i++) {
        for (int j = i; j >= 0; j--) {
            if (j == 0)
                dp[j] = dp[j] * (1 - p[i]);
            else
                dp[j] = dp[j] * (1 - p[i]) + dp[j - 1] * p[i];
        }
    }

    int half = N / 2;
    double prob = 0.0;

    for (int j = half + 1; j <= N; j++) prob += dp[j];

    cout << fixed << setprecision(10) << prob << "\n";
}

int32_t main() {
    fast;
    // int t = 1;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    return 0;
}
