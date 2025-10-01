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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observation
// jo bhi house ko apan protect karege vo 2 moves mai ho jayega and it will spread by i+1
// and baaki sare will spread ya toh by +1 ya phir by +2
// so total points 

void solve(){
    int n , m;
    cin >> n >> m;
    vector<int> positions;
    unordered_map<int , int> mp;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        positions.push_back(x);
    }
    // har portion ke end points par apne ko system baithana hai
    // jab ek end point ko rokege toh ek infected jada ho jaygea
    // 0 1 0 1 1 0 1
    vector<int> ans(n , 0);
    for(int i = 0; i < n ; i++){
        if(mp.find(i+1) != mp.end()){
            ans[i] = 1;
        }
    }
    int flag = 0;
    for(int i = 0; i < n ; i++){
        if(ans[i] == 1){
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