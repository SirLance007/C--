#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n ; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    if (n == 1) {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            cout << 2 << endl;
            return;
        }
    }
    
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        solve();
        t--;
    }
}
