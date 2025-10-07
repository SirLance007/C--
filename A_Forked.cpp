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
    int n, k;
    cin >> n >> k;

    vector<int> v(n * k);
    for (int i = 0; i < n * k; i++)
        cin >> v[i];

    sort(v.begin(), v.end()); // ensure sorted if needed

    int pointer = n * k;
    int sum = 0;

    while (k--)
    {
        pointer -= (n / 2 + 1);
        sum += v[pointer];
    }

    cout << sum << "\n";
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