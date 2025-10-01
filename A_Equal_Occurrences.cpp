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
    int n ;
    cin >> n;
    vector<int> ans;
    unordered_map<int , int> mp;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
        mp[num]++;
    }
    int mini = INT_MAX;
    vector<int> freq;
    for(auto it : mp){
        mini = min(mini , it.second);
        freq.push_back(it.second);
    }
    sort(freq.begin() ,  freq.end());
    int cnt = 0;
    for(int i = 0; i < freq.size() ; i++){
        cnt = max(cnt , ((int)freq.size()- i)*freq[i]);
    }
    cout << cnt << endl;
    // cout << op.size() << endl;
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
