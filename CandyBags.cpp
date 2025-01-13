#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int st = 1;
    int end = n * n;

    for (int j = 0; j < n; j++) {
        for (int i = 1; i < n; i++) {
            if (st > end) break;  // Break if numbers overlap
            cout << st << " " << end << " ";
            st++;
            end--;
        }
        cout << '\n';  // Print a new line after each row
    }
}

int main() {
    solve();
    return 0;
}
