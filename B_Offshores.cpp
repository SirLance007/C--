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

void solve()
{
    int n;
    int x, y;
    cin >> n >> x >> y;

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += (ans[i] / x) * y;
    }

    int total_cost = 0;
    for (int i = 0; i < n; i++)
    {
        total_cost = max(total_cost, ans[i] + s - (ans[i] / x) * y);
    }

    cout << total_cost << endl;
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