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
    int n , m;
    cin >> n >> m;
    string st1 , st2;
    cin >> st1 ;
    cin >> st2;
    string op = "";
    reverse(st2.begin() , st2.end());
    op = st1 + st2;
    int pairs = 0;
    for(int i = 1; i < op.size() ; i++){
        if(op[i-1] == op[i]){
            pairs++;
        }
    }
    if(pairs >= 2){
        cout << "NO" << endl;
        return;
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