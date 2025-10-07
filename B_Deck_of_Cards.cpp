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

// Observation
// if -> 0 hai toh remove top card
// if -> 1 hai remove bottom
// if -> 2 both of them can be removed

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back('+');
    }
    if (n == k)
    {
        for (int i = 0; i < n; i++)
            ans[i] = '-';
        cout << ans << endl;
        return;
    }
    int i = 0, j = n - 1;
    int idx = 0;
    while (idx != k && i <= j)
    {
        if (s[idx] == '0')
        {
            ans[i] = '-';
            i++;
        }
        if (s[idx] == '1')
        {
            ans[j] = '-';
            j--;
        }
        if (s[idx] == '2')
        {
            ans[i] = '?';
            ans[j] = '?';
            i++;
            j--;
        }
        idx++;
    }
    cout << ans << endl;
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
