#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ans(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ans[i][j];
        }
    }

    // Check each cell with value 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ans[i][j] == 1) {
                bool leftOk = true, topOk = true;

                // Check all elements to the left
                for (int k = 0; k < j; k++) {
                    if (ans[i][k] == 0) {
                        leftOk = false;
                        break;
                    }
                }

                // Check all elements above
                for (int k = 0; k < i; k++) {
                    if (ans[k][j] == 0) {
                        topOk = false;
                        break;
                    }
                }

                // If both directions are invalid
                if (!leftOk && !topOk) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
