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
        int k = 0;
        while((1 << (k + 1)) <= n - 1) ++k; 
        for(int i = (1 << k) - 1; i >= 0; i--) {
            cout << i << ' ';
        }
        for(int i = (1 << k); i < n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
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