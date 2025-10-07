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

// 1 2 3 1 2 3
// 1 2 3 4 1 2 3 4
// so har koi sirf do bar hi aa rha hai
// n -> 4
// 2 3 2 4 3 1 1 4
// 2 3 2 4 3 5 1 4

void solve()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << n ;
    // Fill remaining empty spots with 1
    for (int i = 1; i < n; i++)
    {
        cout << " " << i;
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