// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    long long x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    vector<long long> prefix(n);
    prefix[0] = a[0];
    for(int i = 1; i < n; i++) prefix[i] = prefix[i-1] + a[i];

    long long total = 0;
    for(int i = 0; i < n; i++) {
        if(x < prefix[i]) break;
        long long maxDays = (x - prefix[i]) / (i+1) + 1;
        total += maxDays;
    }

    cout << total << endl;
}

int32_t main() {
    fast;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

// Prefix array
// 1 2 2 --> 2 3 3 -> 2 5 8
// 1 3 5 -> 3
// 2 4 6 -> 