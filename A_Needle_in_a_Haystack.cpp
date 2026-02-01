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

// Test CASE : 
// dcbe
// bedbaecfc

// sort -> abccdeef
// 

void solve(){
    string s, t;
    cin >> s >> t;

    unordered_map<char,int> cnt;
    for(char c : t) cnt[c]++;

    for(char c : s){
        if(cnt[c] == 0){
            cout << "Impossible\n";
            return;
        }
        cnt[c]--;
    }

    string tp = "";
    for(auto &it : cnt){
        tp += string(it.second, it.first);
    }
    sort(tp.begin(), tp.end());

    string ans = "";
    int i = 0, j = 0;

    while(i < s.size() || j < tp.size()){
        if(i == s.size()) ans += tp[j++];
        else if(j == tp.size()) ans += s[i++];
        else if(s[i] < tp[j]) ans += s[i++];
        else if(s[i] > tp[j]) ans += tp[j++];
        else ans += s[i++];   
    }

    cout << ans << endl;
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

