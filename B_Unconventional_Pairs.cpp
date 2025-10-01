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

// Observation
// array of n elements 
// maximum diff among all the pairs is minimised 
// 
void solve(){
    int n;
    cin >> n ;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    sort(ans.begin() , ans.end());
    vector<int> diff;
    for(int i = 1; i < n ; i+=2){
        diff.push_back(ans[i] - ans[i-1]);
    }
    sort(diff.begin() , diff.end());
    cout << diff[diff.size()-1] << endl;
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