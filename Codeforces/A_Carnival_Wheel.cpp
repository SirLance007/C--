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
    int l , a , b;
    cin >> l >> a >> b;

    int maxi = 0;
    for(int i = 1; i <= 5000 ; i++){
        maxi = max(maxi , (a + i*b)%l);
    }
    cout << maxi << endl;
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