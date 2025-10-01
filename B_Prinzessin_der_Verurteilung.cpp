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
    string st;
    cin >> st;
    unordered_set<string> set;
    for (int i = 0; i < n; i++)
    {
        string s = "";
        for (int j = i; j < n; j++)
        {
            s += st[j];
            set.insert(s);
        }
    }
    string start = "";
    for (int i = 1; i <= n; i++)
    {
        char to_add = 'a';
        while (to_add <= 'z')   
        {
            string s = start + to_add;  
            if (set.find(s) == set.end())
            {
                cout << s << endl;
                return;
            }
            to_add++;
        }
        start = start + "a";
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
