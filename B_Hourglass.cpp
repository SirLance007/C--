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
    int s , k , m;
    cin >> s >> k >> m;

    // if s >= k
    int rounds = m/k;
    
    if(s >= k){
        if(m%k == 0){
            cout << k << endl;
            return;
        }
        cout << m%k << endl;
        return;
    }

    // if s < k
    int time_after_flip = m%k;
    if(time_after_flip > s){
        cout << 0 << endl;
        return;
    }
    cout << k << endl;
    return;
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