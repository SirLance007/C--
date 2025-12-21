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

// Observations
// jitne bhi 4 hai forms square
// ek bhi 8 aya than the final diagonal will not be included and and the number of timer 8 came reduce
// now every row which is giving a total sum of 7 abs
// 

void solve(){
    int n , x, y;
    cin >> n >> x >> y;
    vector<int> ans;
    string st;
    cin >> st;
    int total_4 = 0;
    int total_8 = 0;
    for(int i = 0; i < n ; i++){
        if(st[i] == '4'){
            total_4++;
        }
        else{
            total_8++;
        }
    }
    int last_coordinate = n*2;
    int min_total = n*2-total_4;
    if(abs(x) > n || abs(y) > n){
        cout << "NO" << endl;
        return;
    }
    if(total_4 > 0){
        if(abs(x) == n && abs(y) == n){
            cout << "NO" << endl;
            return;
        }
        else if(abs(x) + abs(y) > min_total){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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