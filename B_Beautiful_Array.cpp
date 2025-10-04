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
#include <climits>

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n, x, s, q;
        cin >> n >> x >> s >> q;
        vector <int> a(n);
        a[0] = x * s;
        q -= x * s;
        if (q < 0) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                int now = min(x - 1, q);
                a[i] += now;
                q -= now;
            }
            if (q > 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
        }
        
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}