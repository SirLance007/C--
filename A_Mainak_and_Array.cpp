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

// Maximize karna hai an-a1
// 3 options are there 
// either 1 will remain at its postion last wale ko bache hue mai se jo bhi maximum hai vo last mai daal dege
// 2 option last fix rahega apan jo bache hai unsmai se first wale ko minimum bana dege
// 3 option first last aur baaki sare adjacent pair mai se jo maximum hai check kar lege


void solve(){
    int n;
    cin >> n ;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    // first ko stay rakho
    int op = 0;
    int maxi = 0;
    for(int i = 1 ; i < n; i++){
        maxi = max(maxi , ans[i]);
    }
    op = max(op , maxi-ans[0]);
    // last ko stay karo
    int mini = LLONG_MAX;
    for(int i = 0; i  < n-1 ; i++){
        mini = min(mini , ans[i]);
    }
    op = max(op , ans[n-1] - mini);
    // cyclic
    int diff = 0;
    for(int i = 1; i < n ; i++){
        diff = max(diff , ans[i-1]-ans[i]);
    }
    diff = max(diff , ans[n-1] - ans[0]);
    op = max(op , diff);
    cout << op << endl;
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