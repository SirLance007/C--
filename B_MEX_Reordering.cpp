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

// 1 0 5 0 6 1
// 1 , 0
// 1 1 , 0 0
// 1 1 5
// so agar 0 even hai then we need to check aage ki digits
//

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            zero++;
        }
        if (x == 1)
        {
            one++;
        }
    }
    if (zero == 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (zero == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (zero >= 1 && one >= 1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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