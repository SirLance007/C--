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

// Observations
// We need to check for every index ki har index par use pehel wale sare ke sare cars hone chaiye use jada honge toh chalgea but should not be less

void solve(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int j = 0; j < n ; j++){
        int  y;
        cin >> y;
        b.push_back(y);
    }

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