// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observations
// N types of cupcakes hai
// And infinite hai har cupcake ke
// ith cupcake taste ai
// Yeaser will buy cupcake of each type
// Adel will choose a segment and usmai se he will buy one cup cake of each type
// Yasser will be happy if total of tastiness > Adel

// Approach could be
// first calculate all the tastiness
// Adel will approach greedly
// If at anypoint we will find that the tastiness is smaller

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; ++i) { cin >> a[i]; total += a[i]; }

    // Check all prefixes except the full array
    int prefix_sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        prefix_sum += a[i];
        if (prefix_sum >= total) { cout << "NO\n"; return; }
    }

    // Check all suffixes except the full array
    int suffix_sum = 0;
    for (int i = n - 1; i > 0; --i) {
        suffix_sum += a[i];
        if (suffix_sum >= total) { cout << "NO\n"; return; }
    }

    cout << "YES\n";
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}