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
    int total = 0;
    for(int i = 0; i < n ; i++){
        int sum = 0;
        int cnt = 0;
        int mini = INT_MAX;
        for(int j = 0; j < m ; j++){
            cin >> ans[i][j];
            if(ans[i][j] <= 0){
                cnt++;
            }
            sum += abs(ans[i][j]); 
            mini = min(mini , abs(ans[i][j]));
        }
        // cout << "Cnt : " <<  cnt << endl;
        // cout << "Sum : " <<  sum << endl;
        // cout << "Mini : " << mini << endl;
        if(cnt % 2 == 0){
            total += sum;
        }
        else{
            total += sum - 2*mini;
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