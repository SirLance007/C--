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
    string s;
    cin >> s;

    vector<int> positions;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            positions.push_back(i);
        }
    }

    if (positions.size() == 0)
    {
        cout << (n + 2) / 3 << endl;
        return;
    }

    int ans = 0;

    ans += (positions[0] + 1) / 3;

    int remaining = n - 1 - positions.back();
    ans += (remaining + 1) / 3;

    for (int i = 1; i < positions.size(); i++)
    {
        int gap = positions[i] - positions[i - 1] - 1;
        ans += gap / 3;
    }

    cout << positions.size() + ans << endl;
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