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
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observations
// 1-> requirnments ke hisab se change karna hai
// 2 -> minute ka diffrence -> etna time hai uske pass requirnment ko full fill karne ke liye
// 3 -> toh vo jitni baar dusri jagah jaa sakta hai utna shi hai
// math hai
// number of minutes we have = diff-1

void solve()
{
    int n;
    int m;
    cin >> n >> m;
    vector<pair<int, int>> req;
    req.push_back({0LL, 0});
    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        req.push_back({a, b});
    }
    int ans = 0;
    for (int i = 0; i < req.size() - 1; i++)
    {
        int t1 = req[i].first;
        int p1 = req[i].second;
        int t2 = req[i + 1].first;
        int p2 = req[i + 1].second;
        int d = t2 - t1;
        int req_par = p1 ^ p2;
        int maxc = d;
        if ((d % 2) != req_par){
            maxc--;
        }
        ans += maxc;
    }
    int last_t = req.back().first;
    int dlast = m - last_t;
    ans += dlast;
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