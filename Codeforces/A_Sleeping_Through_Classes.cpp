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
#include <numeric>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int asleep = 0;
    int i = 0;
    vector<int> ans;
    while(i < n){
        if(s[i] == '1'){
            for(int j = i ; j < i+k && j < n ; j++){
                s[j] = 0;
            }
        }
    }
    cout << accumulate(ans.begin() , ans.end() , 0LL) << '\n';
}

int32_t main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
