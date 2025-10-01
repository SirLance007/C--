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

// Observations
// Sasha -> 2 digits ko milayega
// Anna -> digits ko reverse karega
// Apan vo condition nikalte hai jismai sasha can win or not 
// Sasha maximum banayega 
// Anna minimum banayega


void solve(){
    int n , m;
    cin >> n >> m;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int val = pow(10 , m);

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

// Given mobiler 