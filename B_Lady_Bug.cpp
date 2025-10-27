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

// swap
// a(i+1) with b(i)
// swap b(i+1) with a(i)

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    // brute force
    for (int i = 1; i < n; i++)
    {
        if (b[i] == '1' && a[i - 1] == '0')
        {
            b[i] = '0';
        }
    }
    // cout << b << endl;
    if (b[0] == '0')
    {
        if (a[1] == '1')
        {
            a[1] = '0';
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (b[i] == '0')
        {
            if (a[i - 1] == '1')
            {
                a[i - 1] = '0';
            }
            if (i + 1 != n)
            {
                if (a[i + 1] == '1')
                {
                    a[i + 1] = '0';
                }
            }
        }
    }
    // cout << a << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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