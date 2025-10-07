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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observation
// if -> 0 hai toh remove top card
// if -> 1 hai remove bottom
// if -> 2 both of them can be removed

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt0 = 0, cnt2 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else if (c == '2') cnt2++;
    }

    int minL = cnt0;
    int maxL = cnt0 + cnt2;
    int m = n - k;

    string res = "";
    for (int i = 1; i <= n; i++) {
        int left = i - m;
        int right = i - 1;

        if (left > right) {
            res += '-';
            continue;
        }

        bool always_remain = (minL >= left && maxL <= right);
        bool no_overlap = (maxL < left || minL > right);

        if (always_remain) {
            res += '+';
        } else if (no_overlap) {
            res += '-';
        } else {
            res += '?';
        }
    }

    cout << res << '\n';
}

int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
