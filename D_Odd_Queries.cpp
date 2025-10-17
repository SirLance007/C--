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
    int n, m;
    cin >> n >> m;  // Fixed: Use >> instead of ,
    
    vector<int> ans;
    int total = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        total += x;
        ans.push_back(x);
    }
    
    vector<int> prefix(n, 0);
    prefix[0] = ans[0];
    for(int i = 1; i < n; i++){  
        prefix[i] = prefix[i-1] + ans[i];
    }
    
    for(int i = 0; i < m; i++){
        int l, r, k;
        cin >> l >> r >> k;
        
        int add = (r - l + 1) * k;
        int remove = (l == 1) ? prefix[r-1] : prefix[r-1] - prefix[l-2];
        int remaining = total - remove + add;
        
        if(remaining % 2 == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
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