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
    vector<int> ans;
    unordered_map<int , int> mp;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        mp[x]++;
    }
    int delete_count = 0;
    for(auto it : mp){
        int val = it.first;
        int second = it.second;
        if(second >= val){
            delete_count += second-val;
        }
        else{
            delete_count += second;
        }
    }
    cout << delete_count << endl;
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