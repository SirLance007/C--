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

map<int, vector<int>> memo;

vector<int> generatePermutation(int n)
{
    if (memo.find(n) != memo.end())
    {
        return memo[n];
    }
    
    if (n == 0)
    {
        memo[0] = {0};
        return memo[0];
    }
    
    vector<int> prev = generatePermutation(n - 1);
    vector<int> result;
    result.reserve(1LL << n);
    
    for (int x : prev)
    {
        result.push_back(x * 2 + 1);
    }
    
    for (int x = 0; x < (1LL << n); x += 2)
    {
        result.push_back(x);
    }
    
    memo[n] = result;
    return result;
}

void solve()
{
    int n;
    cin >> n;
    
    vector<int> ans = generatePermutation(n);
    
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}