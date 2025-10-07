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
// Minimum concecutive wala subarray chaiye

// Approach would be
// First count how many we need to remove
// if koi bhi subarray ki jo len hai vo apni jini chaiye usse jada hai just output that
// then we need to find a subaary of two
// if not then -1
// now agar we are nto able to find the required one
// to apan sabse chota jo sub array hai b ka usko remove karege
// then we again check do we have diff + jo subarray remove kiya array

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    unordered_map<int, int> mp;
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'a')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    int diff = a - b;
    if (diff == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (a == 0 || b == 0)
    {
        cout << -1 << endl;
        return;
    }
    if (diff < 0)
    {
        int cnt_b = 0;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == 'b')
            {
                cnt_b++;
            }
            else
            {
                mp[cnt_b]++;
                cnt_b = 0;
            }
        }
        if(cnt_b > 0){
            mp[cnt_b]++;
        }
    }
    else
    {
        int cnt_a = 0;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == 'a')
            {
                cnt_a++;
            }
            else
            {
                mp[cnt_a]++;
                cnt_a = 0;
            }
        }
        if(cnt_a > 0){
            mp[cnt_a]++;
        }
    }
    for(auto pair : mp){
        if(pair.first >= abs(diff)){
            cout << abs(diff) << endl;
            return;
        }
    }
    cout << -1 << endl;
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