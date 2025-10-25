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

// remainder 
// 3 2 1
// n / 2 -1
// 

void solve(){
    int n;
    cin >> n;
    if(n < 3){
        cout << 1 << endl;
        return;
    }
    int count = 0;
    while( n > 2 ){
        count += 1;
        n -= 2;
    }
    cout << count << endl;
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