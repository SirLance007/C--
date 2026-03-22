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
    string st;
    cin >> st;
    unordered_map<char , int> mp;
    for(int i = 0; i < n ; i++){
        mp[st[i]]++;
    }
    int count = 1;
    for(int i = 1 ; i < n ; i++){
        if(st[i-1] != st[i]){
            count++;
        }
    }
    bool check = false;
    for(auto it : mp){
        if(it.second > 1){
            check = true;
            break;
        }
    }
    if(check){
        count++;
    }
    cout << count << endl;
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

// cbab
// abaa -> 