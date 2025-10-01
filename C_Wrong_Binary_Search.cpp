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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool possible = true;
    int test = 1;
    while (test <= n) {
        if (s[test - 1] == '1') {
            test++;
            continue;
        }
        int op = test;
        while (test <= n && s[test - 1] == '0'){
            test++;
        } 
        int cases = test - 1;
        if (cases - op + 1 == 1) {
            possible = false;
        }
    }
    if (!possible) {
        cout << "NO" << endl;
        return;
    }
    vector<int> p(n + 1);
    int idx = 1;
    while (idx <= n) {
        if (s[idx - 1] == '1') {
            p[idx] = idx;
            idx++;
            continue;
        }
        int l = idx;
        while (idx <= n && s[idx - 1] == '0') idx++;
        int r = idx - 1;
        for (int j = l; j < r; j++) {
            p[j] = j + 1;
        }
        p[r] = l;
    }
    cout << "YES" << endl;
    for (int j = 1; j <= n; j++) cout << p[j] << " ";
    cout << endl;
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