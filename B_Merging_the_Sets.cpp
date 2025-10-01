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
// n-> sets given hai
// har set mai integer hai values hai from 1 to m
// hame kuch sets choose karne hai
// mtlb jutne bhi tum sets choose karoge unmai se sare elements mila liye toh sare elements aa jane chaiye from 1 to n tak

// Approach
//

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> sets(n);
    vector<int> cnt(m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int len;
        cin >> len;
        sets[i].resize(len);
        for (int j = 0; j < len; j++)
        {
            int x;
            cin >> x;
            sets[i][j] = x;
            cnt[sets[i][j]]++;
        }
    }
    bool flag = 1;
    for (int i = 1; i <= m; i++)
    {
        if (cnt[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
        return;
    }
    int not_needed_sets = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        for (auto x : sets[i])
        {
            if (cnt[x] == 1)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            not_needed_sets++;
        }
    }
    if (not_needed_sets >= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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