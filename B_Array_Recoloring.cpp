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
#include <numeric>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// First k chosen elements and last painted one 
// at least one red element
// so first choose the higest color element
// then uske baad you need to check which is maximum from the remaining ones 
// just that if the chosen ones are not either first or the last you need to check the first and last also

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    long long ans = 0;
    if (k > 1) {
      sort(a.begin(), a.end(), greater<int>());
      ans = accumulate(a.begin(), a.begin() + k + 1, 0LL);
    } else {
      int l = *max_element(a.begin(), a.end() - 1);
      int r = *max_element(a.begin() + 1, a.end());
      ans = max(l + a.back(), r + a[0]);
    }
    cout << ans << '\n';
    
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