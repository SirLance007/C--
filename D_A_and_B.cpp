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

// Observation
// apne ko dono mai jo minimum steps le usko lena hai
// to do that we need to calculate for a and then for b
// a ka first aur last nikalo
// b ka first aur last nikalo
// abb apne ko usi are mai enko adjust karna hai and to do that ki sabko mid mai puchna hai simple as that

// a b a a a b a
// a a a a b a a a
//

int n;

long long find(string &s, char c)
{
    int l = 0, r = n - 1;
    while (l < n && s[l] != c)
        l++;
    while (r >= 0 && s[r] != c)
        r--;
    long long i = l, ans = 0, cnt = 0, curr = 0;
    for (int i = l; i <= r; i++)
        if (s[i] == c)
            cnt++;
    while (i < r)
    {
        if (s[i] != c)
        {
            if (curr <= cnt - curr)
                ans += curr;
            else
                ans += cnt - curr;
        }
        else
            curr++;
        i++;
    }
    return ans;
}

void solve()
{
    cin >> n;
    string s;
    cin >> s;
    cout << min(find(s, 'a'), find(s, 'b')) << endl;
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