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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Problem 
// each pair of index i < j
// condition -> j - aj != i - ai
// 3 1 5 1
// 5 3 1 1 
// 4 , 1 , 

// Approach
// sort karke ulta kardo


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
    reverse(ans.begin() , ans.end());
    for(auto x : ans){
        cout << x << " ";
    }
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