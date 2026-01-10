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
    cin >> n;
    vector<int> cnt(n + 1);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cnt[a] += 1;
    }
    int ans = 0;
    int sum = 0;
    for (int k = 0; k <= n; k++)
    {
        if (cnt[k] == 0 && sum == k)
        {
            ans += 1;
        }
        sum += cnt[k];
    }
    cout << ans << '\n';
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