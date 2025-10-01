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
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observation
// len -> k
// sub -1
// sabko zero karna hai
// har value ke liye check kar use jo ek kam hai vo uske adjacent mai hai ya nhi
// sirf 1 ko chood ke

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
    int end = 0;
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == n)
        {
            end = i;
            st = i;
            break;
        }
    }
    // agar end ke adj
    // if (end == n - 1)
    // {
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         if (ans[i] != i + 1)
    //         {
    //             cout << "NO" << endl;
    //             return;
    //         }
    //     }
    //     cout << "YES" << endl;
    // }
    // // start hai toh
    // if (end == 0)
    // {
    //     for (int i = 1; i < n; i++)
    //     {
    //         if (ans[i] != n - i)
    //         {
    //             cout << "NO" << endl;
    //             return;
    //         }
    //     }
    //     cout << "YES" << endl;
    // }
    int maxi = n - 1;
    while (end - st + 1 != n)
    {
        // check karo peeche
        if (end < n - 1 && ans[end + 1] == maxi)
        {
            end++;
            maxi--;
        }
        else if (st > 0 && ans[st - 1] == maxi)
        {
            st--;
            maxi--;
        }
        else
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