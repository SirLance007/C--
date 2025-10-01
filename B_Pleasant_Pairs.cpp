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

// Pleasant Pairs
// vo pairs jismai i < j and ai * aj = i+j
// toh baiscally we need to find i = ai*aj - j;
// sare elements distinct hai
// index jispai apan hai j wale usse apan kya expect kar rahe hai
// i = 2 , j = 4 ==> a[i] = 3 , a[j] = 2
// i + j == 6
// a[i]*a[j] == 6
// ok we need to find at a[i]
// do condition clear hai ki apan i + j karege vo hamesha even ho hoga kyuki odd kar diya toh we cant
// odd sirf ek condition mai aata hai when we multipy two odds and when we are having two odds we can have i + j == odd hamesha even hi ayega
// and if ek even hai aur ek odd hai toh total uska odd hi hoga aur last mai multiply karne par even hi ayega
// so only one condition satlify ki ai and ai == even and i + j == even hona zaruri hai
// multiply mai ek even hona zaruri hai

// Apne ko kya pata hai 4 variables mai se ek apne ko i pata hai ek apne ko ai pata hai
// 3*x =
// ek apne ko relation pata hai ki j = i + j-i
//

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    int maxK = 2 * n;
    vector<int> pos(maxK + 1, 0); 

    for (int i = 1; i <= n; ++i) {
        if (a[i] <= maxK) pos[a[i]] = i;
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int k = 1; (long long)k * a[i] <= 2 * n; ++k) {
            int prod = k * a[i];
            int j = prod - i;          
            if (j > i && j <= n) {   
                if (pos[k] == j) ans++;
            }
        }
    }

    cout << ans << '\n';
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