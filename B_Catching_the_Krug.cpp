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
// grid hai udhar (n+1)x(n+1) elements hai
// Kruga start karega phele
// Apne ko ek portion nikalna padega jismai k would move and k will move to the corner hai total distance would be diagnoal distance from d to k + 1
//

void solve()
{
    int n, ik, jk, id, jd;
    cin >> n >> ik >> jk >> id >> jd;
    int ans = max(abs(jk - jd), abs(ik - id));
    if (ik > id)
    {
        if (jk == jd)
        {
            ans = max(ans, n - id);
        }
        else if (jk > jd)
        {
            ans = max(ans, max(n - jd, n - id));
        }
        else
        {
            ans = max(ans, max(jd, n - id));
        }
    }
    else if (ik < id)
    {
        if (jk == jd)
        {
            ans = max(ans, id);
        }
        else if (jk > jd)
        {
            ans = max(ans, max(id, n - jd));
        }
        else
        {
            ans = max(ans, max(id, jd));
        }
    }
    else
    {
        if (jk > jd)
        {
            ans = max(ans, n - jd);
        }
        else
        {
            ans = max(ans, jd);
        }
    }

    cout << ans << endl;
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