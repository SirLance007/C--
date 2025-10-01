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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observation 
// n -> cards hai
// each card have -> m numbers
// n players hai -> each player one card
// games are player in pairs but the should be distinct
// abs diff of the cards would be paid to the winner 
// so we just need to calculate total amount of winning 

void solve(){
    int n , m;
    cin >> n >> m;
    vector<vector<int>> ans;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin >> ans[i][j];
        }
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