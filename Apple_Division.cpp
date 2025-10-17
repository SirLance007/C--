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

int op( vector<vector<int>>& dp , int index , int sum , vector<int> &ans , int n){
    // base case 
    if(index == n){
        return;
    }
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
    sort(ans.begin() , ans.end());
    int sum1 = 0;
    int sum2 = 0;
    for(int i = n-1 ; i>= 0 ;i-= 2){
        sum1 += ans[i];
    }
    for(int i = n-2 ; i>= 0 ; i-= 2){
        sum2 += ans[i];
    }
    cout << abs(sum1 - sum2) << endl;
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