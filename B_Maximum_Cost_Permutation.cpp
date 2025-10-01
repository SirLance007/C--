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

// Observation
// Maximum cost tab ayegi jab apan jada se jada bada array sort kar sake
// phela zero jha se start hai
// aur last zero tak
// track rakhna padega ki konse elements bache hue hai apne pass
// jo elements pade hai unmai se maximum se minimum pe leke jao
// phir arrange karne ke baad check kar phir un sorted index se last se first unsorted index
// phir unka sum

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        if (ans[i] != 0)
            st.insert(ans[i]);
    }

    vector<int> rem;
    for (int i = 1; i <= n; i++)
    {
        if (st.find(i) == st.end())
            rem.push_back(i);
    }

    sort(rem.begin(), rem.end());
    int idx = rem.size() - 1;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = rem[idx--];
        }
    }
    int start = 1;
    int index1 = -1, index2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != start)
        {
            index1 = i + 1;
            break;
        }
        else
        {
            start++;
        }
    }
    if (index1 == -1)
    {
        cout << 0 << endl;
        return;
    }
    int maxi = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (ans[i] != maxi)
        {
            index2 = i + 1;
            break;
        }
        else
        {
            maxi--;
        }
    }
    cout << (index2 - index1 + 1) << endl;
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