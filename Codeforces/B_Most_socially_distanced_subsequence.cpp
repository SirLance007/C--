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
    vector<int> result;
    // we will tak dips
    int flag = ans[0] > ans[1] ? 1 : 0;
    result.push_back(ans[0]);
    for (int i = 1; i < n; i++)
    {
        if (flag == 0)
        {
            if (ans[i] > ans[i - 1])
            {
                continue;
            }
            else
            {
                flag = 1;
                result.push_back(ans[i - 1]);
            }
        }
        else if (flag == 1)
        {
            if (ans[i] < ans[i - 1])
            {
                continue;
            }
            else
            {
                flag = 0;
                result.push_back(ans[i - 1]);
            }
        }
    }
    result.push_back(ans[n - 1]);
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
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