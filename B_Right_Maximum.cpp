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

// First we are going to take the maximum out of here and also we could add two od the value , then we need to discuss 

void solve(){
    int n;
    cin >> n;
    
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }

    int mx = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(ans[i] >= mx){
            mx = ans[i];
            count++;
        }
    }

    cout << count << endl;
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