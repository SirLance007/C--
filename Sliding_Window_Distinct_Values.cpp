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
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> op;
    int left = 0;
    int right = 0;
    unordered_map<int , int> mp;
    int maxi = 0;
    while(right < n){
        mp[ans[right]]++;
        maxi = max(maxi , mp[ans[right]]);
        if(right-left+1 == k){
            op.push_back(maxi);
            mp[ans[left]]--;
            if(mp[ans[left]] == 0){
                mp.erase(ans[left]);
            }
            left++;
        }
        right++;
    }
    for(auto it : op){
        cout << it << " ";
    }
    cout << endl;
}

int32_t main(){
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
        solve();
    // }
    // return 0;
}