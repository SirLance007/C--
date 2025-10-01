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

// Test cases
// 2 2 4 6 8 9 , m-> 4
// rem -> 2 , 0 , 2 , 0 , 1
// three pairs
// 0 0 2 2 1
// 1 1 1 5 2 4 4 8 6 7
// 1 1 1 2 4 4 5 6 7 8 , m -> 8
// rem -> 1->3 , 2->1 , 4-> 2 , 5-> 1 , 6-> 1 , 7-> 1 , 0-> 1
// total = 1 + 1 + 1 +
// ok so ek set mai do hi values aa sakti hai
// agar rem o hai toh 1 aa ajyega sabka
// uske baar rem nikalo
// 1 -> 8-1 -> 7 aur chaiye abb en mai so jo min hai vo le lo
//

// subarrray mai tod sakte hai eska mtlb we can individually arrange them apne ko smallest number of m divisible array nikalne hai
// total adjacent pairs
// us array mai har adjacent number divisble by m hona chaiye
// so we will tak all the m divisible
// ok so we will store the rem in the map and for each element will check that
// we want to create an array with maximum adjacent values sum  by m
// 2 2 4 6 8 9 , m-> 4
// 2-> 2 , 4-> 1 , 6-> 1 , 8-> 1 , 9-> 1
// 2 -> 3 , 0 -> 2 , 1 -> 1
// 1 + 1 + 1

void solve()
{
    int n, m;
        cin >> n >> m;
        map<int, int> cnt;
        while (n--) {
            int x;
            cin >> x;
            cnt[x % m]++;
        }
        int ans = 0;
        for (auto &c : cnt) {
            if (c.first == 0) ans++;
            else if (2 * c.first == m) {
                ans++;
            } else if (2 * c.first < m || cnt.find(m - c.first) == cnt.end()) {
                int x = c.second, y = cnt[m - c.first];
                ans += 1 + max(0LL, abs(x - y) - 1);
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