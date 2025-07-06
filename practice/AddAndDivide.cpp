#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int ans = INT_MAX;

    int start_incr = 0;
    if (b == 1) {
        b++;
        start_incr = 1;
    }

    for (int extra = 0; extra <= 30; extra++) {
        int curr_b = b + extra;
        int curr_a = a;
        int divides = 0;

        while (curr_a > 0) {
            curr_a /= curr_b;
            divides++;
        }

        ans = min(ans, start_incr + extra + divides);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
