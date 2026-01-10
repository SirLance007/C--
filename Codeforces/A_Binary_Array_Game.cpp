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
    // Alice could only win if there only 2 ones remains at last
    // Alice would try to make one , Bob would try to make 0
    int n;
    cin >> n;
    int one = 0;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    for(int i = 0; i < n ; i++){
        if(ans[i] == 1){
            one++;
        }
    }
    int zero = n-one;
    if(ans[0] == ans[n-1] && ans[0] == 0){
        cout << "Bob" << endl;
        return;
    }
    cout << "Alice" << endl;
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