#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    unordered_set<int> seen;
    bool has_duplicate = false;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (seen.count(b[i])) {
            has_duplicate = true;
        }
        seen.insert(b[i]);
    }
    cout << (has_duplicate ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}