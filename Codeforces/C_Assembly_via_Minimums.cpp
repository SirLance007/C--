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

// Observations
//

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    int m = n * (n - 1) / 2;
    int maxi = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        maxi = max(maxi, x);
        ans.push_back(x);
    }
    unordered_map<int, int> mp;
    int comp = n - 1;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    for (auto it : ans)
    {
        mp[it]++;
    }
    for (auto it : mp)
    {
        pq.push({it.first, it.second}); 
    }
    vector<int> result;
    
    while (!pq.empty() && result.size() < n - 1)
    {
        int val = pq.top().first;
        int freq = pq.top().second;
        pq.pop();
        
        if (freq >= comp)
        {
            result.push_back(val);
            freq -= comp;
            comp = comp - 1;
            if (freq > 0)
            {
                pq.push({val, freq});
            }
        }
    }
    
    result.push_back(maxi);
    
    for (auto it : result)
    {
        cout << it << " ";
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