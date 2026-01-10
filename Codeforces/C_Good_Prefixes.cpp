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
    cin >> n ;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int prefix = 0;
    int total = 0;
    int maxi = 0;
    for(int i = 0; i < n ; i++){
        if(ans[i] >= maxi){
            if(ans[i] == prefix){
                total++;
            }
            
        }
        else if(ans[i] < maxi){
            int val = prefix - maxi + ans[i];
            int op = maxi;
            if(val == op){
                total++;
            }
        }
        prefix += ans[i];
        maxi = max(maxi , ans[i]);
    }
    cout << total << endl;
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