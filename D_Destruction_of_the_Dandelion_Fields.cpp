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

// Observations
// 1-> any order
// even ya odd hai
// agar odd hai toh vo state change karega yanni on hai toh off ya phir off hai toh on
// agar vo on hai toh hi vo cut karega
// thik hai toh apne ko maximum bar esko on rakhna hai toh un feils pe rakhna hai jha par jada se jada crops hai
// toh even wali sari fasal kaat dete hai uske baad odd walo ko

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    int flag = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> odd_num;
    int sum_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] % 2 != 0)
        {
            odd++;
            flag = 1;
            odd_num.push_back(ans[i]);
        }
        else
        {
            sum_even += ans[i];
        }
    }
    int total = 0;
    if (odd >= 1)
    {
        total = sum_even;
        int k = odd_num.size();
        sort(odd_num.begin(), odd_num.end());
        long long total = sum_even;
        for (int i = k / 2; i < k; i++)
        {
            total += odd_num[i];
        }
        cout << total << endl;
    }
    else
    {
        cout << 0 << endl;
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