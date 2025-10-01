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
// so to make it non decreasing apan sabse pheli value ko sabse choti banayege and we will move on like this 
// so har index pa we need to check ki uske aage sabse choti value yaani diffrence exist karta hai 
// impossible -> jab ek case ayye jismai last value se koi choti value mil jaye 

// so its like ai = ay - az
// az = ay + ai
// so basicaally we need to find two


void solve(){
    int n;
    cin >> n ;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<vector<int>> op;
    
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