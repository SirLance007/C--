// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            bool flag = false;
            for (int j = max(0LL, i - k + 1); j < i; j++) {
                if (s[j] == '1') {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                count++;
            }
        }
    }

    cout << count << "\n";
}

int32_t main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
