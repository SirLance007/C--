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
    int x , k;
    cin >> x >> k;
    if( x < k ){
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    if(x%k != 0){
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    cout << 2 << endl;
    cout << x-k+1 << " " << k-1 << endl;
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