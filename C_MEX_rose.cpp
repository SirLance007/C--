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

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> ans(n);
    for(int i = 0; i < n ; i++){
        cin >> ans[i];
    }

    // count occurrences of k and build set of other numbers
    int count_k = 0;
    unordered_set<int> st; // will contain values != k
    for(int i = 0; i < n; i++){
        if(ans[i] == k) count_k++;
        else st.insert(ans[i]);
    }

    // count how many in [0, k-1] are missing
    int missing = 0;
    for(int x = 0; x < k; x++){
        if(st.find(x) == st.end()) missing++;
    }

    // minimal operations: we can use occurrences of k to fill some missing numbers
    int change = max((int)missing, (int)count_k);
    cout << change << endl;
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
