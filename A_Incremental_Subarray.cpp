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
// 1 , 1 2 , 1 2 3 , 1 2 3 4 , 1 2 3 4 5
// first of all jo order diya hai vo 
// ok so in this array we would be getting n-1 time value 1 n-2 imes value 2 .... 1 time value n
// for 6 
// 1 -> 6
// 2 -> 5 
// 3 -> 4 
// 4 -> 3
// 5 -> 2
// 6 -> 1

// jo sub array chaiye usmai se maximu ko dhundo 
// maximum tak kitne elements use ho chuke honge 
// for example 4 tak 
// 1 -> 5
// 2 -> 3
// 3 -> 2
// 4 -> 1

// remaining 
// 1 -> 1
// 2 -> 2
// 3 -> 2
// 4 -> 2

// 1 2 3
// maxi -> 3;
// total -> 5
// used -> 3;
// remaining -> 2
// 2 / 1
// 1 + 2 -> 3
void solve(){
    int n , m;
    cin >> n >> m ;
    vector<int> ans;
    for(int i = 0; i < m ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    if( m == 2 ){
        if(ans[0] == 1 && ans[1] == 1){
            cout << 1 << endl;
            return;
        }
    }
    int total = 0;
    int idx = 0;
    int maxi_idx = 0;
    int maxi = 0;
    for(int i = 0; i < m ; i++){
        if(ans[i] > maxi){
            maxi = ans[i];
            maxi_idx = i;
        }
    }
    int total_one = n;
    int used_one = maxi;
    for(int i  = maxi_idx+1 ; i < m ; i++){
        if(ans[i] == 1){
            used_one++;
        }
    }
    int ones = 0;
    for(int i  = 0 ; i < m ; i++){
        if(ans[i] == 1){
            ones++;
        }
    }
    // cout << "Total_one : " << total_one << endl;
    // cout << "Used_one : " << used_one << endl;
    int rem = total_one-used_one;
    cout << rem/ones + 1 << endl;
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