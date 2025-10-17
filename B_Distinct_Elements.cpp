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
    vector<int> ans;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    
    a[0] = 1;
    int crr = 1;
    
    for(int i = 1; i < n; i++){
        int diff = ans[i] - ans[i-1] - 1;
        if(diff == i){
            a[i] = ++crr;
        }
        else{
            a[i] = a[i - diff - 1];
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    while(t-- > 0){
        solve();
    }
    return 0;
}