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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;

    int count_a = count(st.begin(), st.end(), 'a');
    int count_b = count(st.begin(), st.end(), 'b');
    int diff = count_a - count_b;

    vector<int> prefix(n, 0);
    prefix[0] = (st[0] == 'a' ? 1 : -1);

    unordered_map<int, int> mp; 
    mp[0] = -1; 
    int ans = n;

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            prefix[i] = prefix[i - 1] + (st[i] == 'a' ? 1 : -1);
        }

        mp[prefix[i]] = i;

        int needed = prefix[i] - diff;
        if (mp.find(needed) != mp.end()) {
            ans = min(ans, i - mp[needed]);
        }
    }

    cout << (ans == n ? -1 : ans) << endl;
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
