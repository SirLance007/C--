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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin >> n ;
    vector<int> ans;
    unordered_map<int , int> freq;
    unordered_set<int> st;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        st.insert(x);
        freq[x]++;
    }
    for(auto &p : freq){
        int val = p.first, cnt = p.second;
        if(cnt % val != 0){
            cout << -1 << endl;
            return;
        }
    }
    int initial = 1;
    unordered_map<int , int> mp;
    for(auto x : st){
        mp[x] = initial;
        initial++;
    }
    for(int i = 0; i < n ; i++){
        cout << mp[ans[i]] << " ";
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