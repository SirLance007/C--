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

// Vasaya rating for a rated round was R
// Vasaya intial rating was Ro
// div 2 -. rated for participants strickly smaller than x


void solve(){
    int r , x , d , n;
    cin >> r >> x >> d >> n;
    string st;
    cin >> st;
    if( x == 0 ){
        cout << 0 << endl;
        return;
    }
    int count = 0;
    if(r < x){
        cout << n << endl;
        return;
    }
    for(int i = 0; i < n ; i++){
        if(st[i] == '2' && r >= x){
            count++;
            continue;
        }
        else if( st[i] == '1' && r >= x){
            r -= abs(d);
            if( r < 0 ){
                r = 0;
            }
            if( r < x){
                break;
            }
        }
    }
    cout << n - count << endl;
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