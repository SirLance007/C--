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

int op(vector<int> &ans , int idx , int n , vector<int> &dp){
    // base case
    if(idx >= n-1){
        return 0;
    }
    if(dp[idx] != -1){
        return dp[idx];
    }
    // inc
    int one = abs(ans[idx+1] - ans[idx]) + op(ans , idx+1 , n , dp);
    int sec = LLONG_MAX;
    if(idx + 2 <= n-1){
        sec = abs(ans[idx+2] - ans[idx]) + op(ans , idx+2 , n , dp);
    }
    dp[idx] = min(one , sec);
    return dp[idx];
}
void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> dp(n , -1);
    int result = op(ans , 0 , n , dp);
    cout << result << endl;
}

int32_t main(){
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}