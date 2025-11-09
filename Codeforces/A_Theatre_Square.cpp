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
    int n , m , a;
    cin >> n >> m >> a;
    int x = 0;
    if(n%a == 0){
        x = n/a;
    }
    else{
        x = n/a + 1;
    }
    int y = 0;
    if(m%a == 0){
        y = m/a;
    }
    else{
        y = m/a + 1;
    }
    cout << x*y << endl;
}

int32_t main(){
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}