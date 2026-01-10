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
    string st1, st2;
    cin >> st1 >> st2;
    bool isTrue = 0;
    int total = 0;
    if (st1.size() > st2.size())
    {
        int rem = st1.size() - 1;
        total += 9 * rem;
        total += st1[0] - '0';
        cout << total << endl;
        return;
    }
    else if (st2.size() > st1.size())
    {
        int rem = st2.size() - 1;
        total += 9 * rem;
        total += st2[0] - '0';
        cout << total << endl;
        return;
    }
    int n = st1.size();
    for (int i = 0; i < n; i++)
    {
        if (st1[i] != st2[i])
        {
            total += abs((st1[i] - '0') - (st2[i] - '0'));
            int rem = n - i-1;
            total += rem * 9;
            cout << total << endl;
            return;
        }
        else
        {
            total += abs((st1[i] - '0') - (st2[i] - '0'));
        }
    }
    cout << total << endl;
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