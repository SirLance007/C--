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
    unordered_map<int , int> mp;
    int first = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        mp[x]++;
        first = mp[x];
    }
    vector<int> freq;
    for(auto it : mp){
        freq.push_back(it.second);
    }
    unordered_map<int , int> freq2;
    vector<int> ans;
    sort(freq.begin() , freq.end());
    int maxi = 0;
    // for(auto it : freq){
    //     cout << it << " ";
    // }
    // cout << endl;
    for(int i = 0; i < freq.size() ; i++){
        maxi = max(maxi , freq[i]*((int)freq.size()-i));
    }
    cout << maxi << endl;
    // int maxi = 0;
    // for(auto it : freq2){
    //     maxi = max(maxi , it.second);
    // }
    // cout << maxi << endl;
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