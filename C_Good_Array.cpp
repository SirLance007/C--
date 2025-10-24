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

// Test Case
// 5
// 1 2 2 2 5

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    unordered_map<int, vector<int>> val; 
    int total = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        val[x].push_back(i+1);
        total += x;
    }
    sort(ans.begin() , ans.end());
    int flag = 0;

    vector<int> res; 
    unordered_set<int> used;
    for(int i = 0; i < n; i++){
        if(used.find(ans[i]) != used.end()){
            continue;
        }
        int sum = total - ans[i];
        int mx = (i == n-1 ? ans[n-2] : ans[n-1]);
        if(sum - mx == mx){ 
            flag = 1;
            for(auto idx : val[ans[i]]){
                res.push_back(idx);
            }
        }
        used.insert(ans[i]);
    }

    if(flag == 0){
        cout << 0 << endl;
        return;
    }

    cout << res.size() << endl;
    for(auto x : res) cout << x << " ";
    cout << endl;
}

int32_t main(){
    fast;
    solve();
}
