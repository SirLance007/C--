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
    string s , t;
    cin >> s >> t;
    if(s.size() != t.size()){
        cout << "NO" << endl;
        return;
    }
    unordered_map<char , int> mp;
    for(int i = 0; i < s.size() ; i++){
        mp[s[i]]++;
    }
    for(int i = 0; i < t.size() ; i++){
        if(mp.find(t[i]) == mp.end()){
            cout << "NO" << endl;
            return;
        }
        else{
            mp[t[i]]--;
            if(mp[t[i]] == 0){
                mp.erase(t[i]);
            }
        }
    }
    cout << "YES" << endl;
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