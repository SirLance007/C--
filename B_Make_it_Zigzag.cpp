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
    vector<int> ans(n+2);
    
    for(int i = 1; i <= n; i++){
        cin >> ans[i];
    }
    
    vector<int> prefix(n+2);
    prefix[1] = ans[1];
    for(int i = 2; i <= n; i++){
        prefix[i] = max(prefix[i-1], ans[i]);
    }
    
    
    for(int i = 2; i <= n; i += 2){
        ans[i] = prefix[i];
    }
    
    int count = 0;
    
    
    ans[0] = LLONG_MAX;
    ans[n+1] = LLONG_MAX;
    for(int i = 1; i <= n; i += 2){
        count += max(0LL, ans[i] - (min(ans[i-1], ans[i+1]) - 1));
    }
    
    cout << count << endl;
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