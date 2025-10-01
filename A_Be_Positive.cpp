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
    int n;
    cin >> n;
    vector<int> ans;
    int neg = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
        if(ans[i] < 0){
            neg++;
        }
        if(ans[i] == 0){
            zero++;
        }
    }
    int total = 0;
    total = zero;
    int rem = neg%2;

    total += rem*2;
    // for (int i = 0; i < n; i++)
    // {
    //     if (ans[i] < 0)
    //     {
    //         total += abs(ans[i]) + 1;
    //     }
    //     else if (ans[i] == 0)
    //     {
    //         total++;
    //     }
    // }
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