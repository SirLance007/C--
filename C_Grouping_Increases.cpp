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
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int t1 = LLONG_MAX, t2 = LLONG_MAX;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (t1 > t2)
        {
            swap(t1, t2);
        }
        if (ans[i] <= t1)
        {
            t1 = ans[i];
        }
        else if (ans[i] <= t2)
        {
            t2 = ans[i];
        }
        else
        {
            t1 = ans[i];
            count++;
        }
    }
    cout << count << '\n';
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