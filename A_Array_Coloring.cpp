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
    if(ans[0]%2 != 0){
        for (int i = 0; i < n ; i += 2)
        {
            if (ans[i]%2 == 0)
            {
                cout << "NO" << endl;
                // cout << ans[i] << " " << ans[i + 2] << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else{
        for (int i = 0; i < n ; i += 2)
        {
            if (ans[i]%2 != 0)
            {
                cout << "NO" << endl;
                // cout << ans[i] << " " << ans[i + 2] << endl;
                return;
            }
        }
        cout << "YES" << endl;
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