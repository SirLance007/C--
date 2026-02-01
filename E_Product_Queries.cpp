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
    vector<int> arr(n);
    unordered_map<int, int> freq;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        
        for (auto &p : freq)
        {
            int num = p.first;
            if (arr[i] % num == 0)
            {
                int other = arr[i] / num;
                
                if (freq.count(other))
                {
                    if (num == other && freq[num] >= 2)
                    {
                        found = true;
                        break;
                    }
                    else if (num != other)
                    {
                        found = true;
                        break;
                    }
                }
            }
        }
    }
}

int32_t main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}