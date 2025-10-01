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
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    // collect required inserts for each gap > x
    vector<int> needs;
    for (int i = 1; i < n; i++)
    {
        int gap = a[i] - a[i - 1];
        if (gap > x)
        {
            // minimum new students to make this gap connectable
            int k_needed = (gap - 1) / x; // integer division is fine
            needs.push_back(k_needed);
        }
    }

    // if no gaps -> 1 group
    if (needs.empty())
    {
        cout << 1 << '\n';
        return;
    }

    sort(needs.begin(), needs.end());
    int groups = (int)needs.size() + 1;

    // greedily fill smallest needs first
    for (int need : needs)
    {
        if (k >= need)
        {
            k -= need;
            groups--;
        }
        else
            break;
    }

    cout << groups << endl;
}

int32_t main()
{
    fast;
    solve();
    return 0;
}
