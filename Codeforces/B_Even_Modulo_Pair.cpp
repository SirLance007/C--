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
    vector<int> a, e, o;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        if (x % 2 == 0)
        {
            e.push_back(x);
        }
        else
        {
            o.push_back(x);
        }
    }
    if (e.size() >= 2)
    {
        cout << e[0] << " " << e[1] << endl;
        return;
    }
    else
    {
        if (n <= 50)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    int x = a[i];
                    int y = a[j];
                    if ((y % x) % 2 == 0)
                    {
                        cout << x << " " << y << endl;
                        return;
                    }
                }
            }
            cout << -1 << endl;
            return;
        }
        else
        {
            for (int i = 1; i < o.size(); i++)
            {
                int x = a[i];
                int y = a[i - 1];
                if ((x % y) % 2 == 0)
                {
                    cout << y << " " << x << endl;
                    return;
                }
            }
        }
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