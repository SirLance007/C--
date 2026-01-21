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
    int n , d;
    cin >> n >> d;
    string st = "";
    for(int i = 0; i < n ; i++){
        st += to_string(d);
    }
    int val = stoll(st);
    cout << 1 << " ";
    if(val%3 == 0){
        cout << 3 << " ";
    }
    if(val%5 == 0){
        cout << 5 << " ";
    }
    if(val%7 == 0){
        cout << 7 << " ";
    }
    if(val%9 == 0){
        cout << 9 << " ";
    }
    cout << endl;
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