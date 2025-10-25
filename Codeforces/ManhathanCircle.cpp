#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> ans(n, vector<char>(m));

    // Read the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ans[i][j];
        }
    }

    int maxRowCount = 0, rowIdx = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (ans[i][j] == '#') count++;
        }
        if (count > maxRowCount) {
            maxRowCount = count;
            rowIdx = i;
        }
    }

    int maxColCount = 0, colIdx = 0;
    for (int j = 0; j < m; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i][j] == '#') count++;
        }
        if (count > maxColCount) {
            maxColCount = count;
            colIdx = j;
        }
    }

    cout << rowIdx + 1 << " " << colIdx + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
