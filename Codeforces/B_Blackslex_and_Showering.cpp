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
    
    int total = 0;
    for (int i = 0; i < n - 1; i++)
    {
        total += abs(ans[i] - ans[i + 1]);
    }
    
    int mini = total;
    
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            int newTotal = total - abs(ans[1] - ans[0]);
            mini = min(mini, newTotal);
        }
        else if (i == n - 1)
        {
            int newTotal = total - abs(ans[n - 2] - ans[n - 1]);
            mini = min(mini, newTotal);
        }
        else
        {
            int newTotal = total - abs(ans[i - 1] - ans[i]) - abs(ans[i] - ans[i + 1]);
            newTotal += abs(ans[i - 1] - ans[i + 1]);
            mini = min(mini, newTotal);
        }
    }
    cout << mini << endl;
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