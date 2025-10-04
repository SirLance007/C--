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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observations
// Col wise jo maximum mil rha hai vo karna hai
// row mai se max nikalna hai 


void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    unordered_set<int> st;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        st.insert(x);
    }
    if(st.size() == 1){
        cout << "NO" << endl;
        return;
    }
    int first = ans[0];
    int second = ans[0];
    int flag = 0;
    cout << "YES" << endl;
    for(int i = 1; i < n ; i++){
        if(ans[i] != first){
            cout << 1 << " " << i+1 << endl;
            if(flag == 0){
                second = i+1;
                flag = 1;
            }
        }
    }
    
    for(int i = 1; i < n ; i++){
        if(first == ans[i]){
            cout << second << " " << i+1 << endl;
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