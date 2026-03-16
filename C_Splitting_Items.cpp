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
    int n , k;
    cin >> n >> k;
    vector<int> ans(n);
    for(int i = 0; i < n ; i++){
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end(), greater<int>());

    int res = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            res += ans[i];
        }
        else{
            int add = min(k, ans[i-1] - ans[i]);
            ans[i] += add;
            k -= add;
            res -= ans[i];
        }
    }

    cout << res << endl;
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