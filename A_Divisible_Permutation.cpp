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

    vector<int> ans(n);
    int left = 1, right = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if ((n - i) % 2 == 1)
        {
            ans[i] = left++;
        }
        else
        {
            ans[i] = right--;
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
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