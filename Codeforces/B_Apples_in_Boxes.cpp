// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
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
//

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    long long sum = accumulate(a.begin(), a.end(), 0LL);

    sort(a.begin(), a.end());
    a[n - 1]--;
    sort(a.begin(), a.end());

    if (a[n - 1] - a[0] > k || sum % 2 == 0)
    {
        cout << "Jerry\n";
        return;
    }
    cout << "Tom\n";
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