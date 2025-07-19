#include <bits/stdc++.h>
using namespace std;
#define ll long long  // ✅ Fix: define 'll' properly

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> ans;
    ll total = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ans.push_back(x);
        total += x;
    }

    sort(ans.begin(), ans.end());
    int index = 0;              // ✅ Fix: was 'index1' before, but you used 'index' later
    int last = n - 1;

    // 6 2
    // 15 22 12 10 13 11
    // k = 1 > 10 11 12 13 15 22  => 10+11 = 21 >= 22 => 10+11+12+13 => 46

    while (k != 0) {
        ll sum = ans[index] + ans[index + 1];
        if (sum >= ans[last]) {
            total -= ans[last];
            last--;
        } else {
            total -= sum;
            index += 2;
        }
        k--;
        if( k == 0){
            break;
        }
    }
    // total => 
    cout << total << endl;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}
