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
// Min height we have of each cell 
// Count how many elements have height <= h

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;

    for (int i = 0; i <= n; i++) {
        vector<int> temp(arr.begin(), arr.begin() + i);
        sort(temp.begin(), temp.end());

        long long sum = 0;
        for (int j = i - 1; j >= 0; j -= 2) {
            sum += temp[j];
        }

        if (sum <= k) ans = i;
        else break; 
    }

    cout << ans << "\n";
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
