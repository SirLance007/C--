#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s = to_string(n);

    // Validate length before accessing index 2
    if (s.length() < 3 || s[2] == '0' || s[0] != '1' || s[1] != '0') {
        cout << "NO" << endl;
        return;
    } else {
        if (s.length() > 3) {
            cout << "YES" << endl;
            return;
        } else if (s.length() == 3 && (s[2] - '0') < 2) {
            cout << "NO" << endl;
            return;
        } else {
            cout << "YES" << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
