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
    int n;
    cin >> n;
    vector<string> op;
    for(int i = 0; i < 2*n-2 ; i++){
        string x;
        cin >> x;
        if(x.size() == n-1){
            op.push_back(x);
        }
    }
    string rev = op[0];
    reverse(rev.begin() , rev.end());
    if(rev == op[1]){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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