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

bool solve(int n , int m){
    if(n == m){
        return true;
    }else if(n%3 != 0){
        return false;
    }
    else{
        return solve(n/3 , m) || solve(2*n/3 , m);
    }
}

void solve(){
    int n , k;
    cin >> n >> k;
    if(solve(n , k)){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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