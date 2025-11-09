// Hare Krishna
// Code by Prankur Sharma

#include <iostream>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n; cin >> n;
    int a = n / 2;          // floor
    int b = (n + 1) / 2;    // ceil
    int ans = 4 * (a + 1) * (b + 1) - 4;
    cout << ans << "\n";
}

int32_t main() {
    fast;
    int t = 1;
    while (t--) solve();
    return 0;
}
