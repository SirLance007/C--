#include <bits/stdc++.h>
using namespace std;

void solve() {
    string st;
    cin >> st;
    int value = stoi(st);
    int start = 0;
    int end = (int)sqrt(value);  // Optimization

    while (start <= end) {
        int sum = (start + end)*(start + end);
        if (sum == value) {
            cout << start << " " << end << endl;
            return;
        } else if (sum < value) {
            start++;
        } else {
            end--;
        }
    }
    cout << "-1" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
