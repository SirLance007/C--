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
    string st;
    cin >> st;
    int n = st.size();
    
    // Check for two consecutive '*' -> infinite
    for(int i = 0; i < n - 1; i++){
        if(st[i] == '*' && st[i + 1] == '*'){
            cout << -1 << endl;
            return;
        }
    }
    
    // Check for pattern >*< or >**...< -> infinite
    bool hasRight = false;
    bool hasStar = false;
    for(int i = 0; i < n; i++){
        if(st[i] == '>'){
            hasRight = true;
            hasStar = false;
        }
        else if(st[i] == '*' && hasRight){
            hasStar = true;
        }
        else if(st[i] == '<' && hasRight && hasStar){
            cout << -1 << endl;
            return;
        }
        else if(st[i] == '<'){
            hasRight = false;
            hasStar = false;
        }
    }
    
    // Calculate maximum time using DP
    vector<int> dp(n, -1);
    
    function<int(int)> calc = [&](int pos) -> int {
        if(pos < 0 || pos >= n){
            return 0;
        }
        if(dp[pos] != -1){
            return dp[pos];
        }
        
        dp[pos] = -2; // Being computed (cycle detection)
        
        int result;
        if(st[pos] == '<'){
            int next = calc(pos - 1);
            if(next == -2) return -2;
            result = 1 + next;
        }
        else if(st[pos] == '>'){
            int next = calc(pos + 1);
            if(next == -2) return -2;
            result = 1 + next;
        }
        else { // st[pos] == '*'
            int left = calc(pos - 1);
            int right = calc(pos + 1);
            if(left == -2 || right == -2) return -2;
            result = 1 + max(left, right);
        }
        
        dp[pos] = result;
        return result;
    };
    
    int maxi = 0;
    
    for(int i = 0; i < n; i++){
        if(dp[i] == -1){
            int time = calc(i);
            if(time == -2){
                cout << -1 << endl;
                return;
            }
        }
        maxi = max(maxi, dp[i]);
    }
    
    cout << maxi << endl;
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