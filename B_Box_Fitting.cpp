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

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    unordered_map<int , int> mp;
    unordered_set<int> st;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        mp[x]++;
    }
    sort(ans.begin() , ans.end());
    int total = 0;
    while(mp.size() > 0){
        int sum = 0;
        for(int i = n-1 ; i >= 0 ; i--){
            int val = ans[i];
            
        }
    }
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