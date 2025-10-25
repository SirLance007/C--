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

// Observation would be 
// dp would be ek idx toh ayega hi ayega 
// ek apne ko track rakhna padega ki how muhc weight is left 
// and values we can add

int op(vector<vector<int>> &ans , int idx , int W , int n, vector<vector<int>> &dp){
    // base case 
    if(idx >= n){
        return 0;
    }
    if(dp[idx][W] != -1){
        return dp[idx][W];
    }
    int incl = LLONG_MIN;
    if(ans[idx][0] <= W){
        incl = ans[idx][1] + op(ans , idx+1 , W - ans[idx][0] , n , dp);
    }
    int exl = op(ans , idx+1 , W , n , dp);
    dp[idx][W] = max(incl , exl);
    return dp[idx][W];
}

void solve(){
    int n , W;
    cin >> n >> W;
    vector<vector<int>> ans( n , vector<int> (2));
    for(int i = 0; i < n ; i++){
        cin >> ans[i][0] >> ans[i][1];
    }
    vector<vector<int>> dp( n+1 , vector<int>(W+1 , -1));
    cout << op(ans , 0 , W , n, dp);
}

int32_t main(){
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
        solve();
    // }
    // return 0;
}