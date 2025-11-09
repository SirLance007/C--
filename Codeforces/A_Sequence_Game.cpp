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
    int n ;
    cin >> n;
    vector<int> ans(n);
    for(int i = 0; i < n ; i++){
       cin >> ans[i];
    }
    sort(ans.begin() , ans.end());
    int maxi = ans[n-1];
    int mini = ans[0];
    int x;
    cin >> x;
    if(mini <= x && maxi >= x){
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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