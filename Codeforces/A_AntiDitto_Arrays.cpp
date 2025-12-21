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
    int n , x;
    cin >> n >> x;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int total = 0;
    for(int i = 1; i < n-1 ; i++){
        if(ans[i] == ans[i-1] && ans[i] == ans[i+1]){
            total += pow(x , i+1);
            if(ans[i] == 1){
                ans[i] = 0;
            }
            else{
                ans[i] = 1;
            }
        }
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