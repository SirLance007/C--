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
// Har strength ke liye no of levels that can be completed

void solve()
{
    int n;
    cin >> n;
    vector<int> strength;
    vector<int> levels;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        strength.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        levels.push_back(x);
    }
    
    sort(strength.begin(), strength.end());
    
    vector<int> prefixSum(n, 0);
    prefixSum[0] = levels[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + levels[i];
    }
    
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int swords = n-i;
        int left = 0; 
        int right = n-1;
        int levelsCompleted = 0;
        
        while(left <= right){
            int mid = left + (right-left)/2;
            if(prefixSum[mid] <= swords){
                levelsCompleted = mid + 1;
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        
        maxi = max(maxi, strength[i] * levelsCompleted);
    }
    cout << maxi << endl;
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