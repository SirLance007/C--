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

// Observation
// grid de rakhi hai 
// agar side walo ko -1 -1 se multipluy karna hai 
// har row mai se nikal lo kinta neg and zero hai 
// agar even hai toh add all 
// agar nhi hai toh - smallest one 
// 2 + 3 + 4 + 5 + 1 + 2 + 3 + 4 + 2 + 3
// 

void solve(){
    int n , m;
    cin >> n >> m;
    vector<vector<int>> ans( n , vector<int> (m , 0));
    
    int total = 0;           // sum of absolute values
    int cnt = 0;             // count of negative numbers
    int mini = LLONG_MAX;    // smallest absolute value
    
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin >> ans[i][j];
            if(ans[i][j] < 0) cnt++;
            total += abs(ans[i][j]);
            mini = min(mini , abs(ans[i][j]));
        }
    }

    if(cnt % 2 == 0){
        cout << total << endl;
    }
    else{
        cout << total - 2*mini << endl;
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