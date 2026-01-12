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
    int total = 0;
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    unordered_set<int> st;
    vector<int> unique;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        if(st.find(x) == st.end()){
            unique.push_back(x);
        }
        st.insert(x);
    }
    sort(unique.begin() , unique.end());
    int remove = n-k+1;
    // cout << "HELLO" << endl;
    int idx = unique.size();
    int val = unique.size();
    for(int i = 0; i < unique.size() ; i++){
        if(unique[i] != i){
            idx = i;
            val = i;
            break;
        }
    }
    int more_val = n-val;
    if(more_val >= remove){
        cout << val << endl;
        return;
    }
    cout << unique[n-remove-1]+1 << endl;
    
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