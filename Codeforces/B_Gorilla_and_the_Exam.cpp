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

// 4 7 1 3 2 4 1
// 1 1 2 3 4 4 7 , 0
// size -> 5 , maxFreq = 2

void solve(){
    int n , k;
    cin >> n >> k;
    map<int , int> mp;
    int maxi = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int operations = mp.size();
    vector<int> ans;
    for(auto it : mp){
        ans.push_back(it.second);
    }
    sort(ans.begin() , ans.end());
    for(int i = 0; i < ans.size()-1 ; i++){
        if(ans[i] <= k){
            operations--;
            k -= ans[i];
        }
    }
    cout << operations << endl;
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