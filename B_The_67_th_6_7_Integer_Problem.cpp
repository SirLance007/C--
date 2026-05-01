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
    vector<int> ans;
    for(int i = 0; i < 7 ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    sort(ans.begin() , ans.end());
    int total = 0;
    for(int i = 0; i < 6 ; i++){
        total += -1 * (ans[i]);
    }
    total += ans[6];
    cout << total << endl;
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