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

// Observation
// l and r of the array
// now take the prefix[l] - prefix[r]
// equaltion of the sum = (r-l+1)*(r+l) - (pr - pl-1)
void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int sum = 0;
    int max_val = 0;
    int op = 0;
    for(int i = 1; i <= n ; i++){
        max_val = max(max_val , -1*i*i + i + sum);
        sum += ans[i-1];
        op = max(op , i*i+i-sum+max_val);
    }
    cout << op + sum << endl;
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