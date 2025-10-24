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

// Observation
// Wow factor os a string is number of subsequence equal to the string "wow"
// w ki jagah vo v type karta hai aur vo bhi 2
// vv -> w
// so har o se phele kitne v hai and uske baad kitne v hai unke sath we can make a sequence by repacing number of v by v-1 -> w
// pairs would be -> k-1 * k-1

void solve()
{
    string st;
    cin >> st;
    int n = st.size();
    vector<int> prefix(n, 0);
    prefix[0] = 0;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1];
        if (st[i] == 'v' && st[i - 1] == 'v')
        {
            prefix[i]++; 
        }
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'o')
        {
            int left = prefix[i];
            // cout << "Left : " << left << endl;
            int right = (prefix[n - 1] - prefix[i]);
            // cout << "Right : " << right << endl;
            total += left * right;
        }
    }
    cout << total << endl;
}

int32_t main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    // return 0;
}