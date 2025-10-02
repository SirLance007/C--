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

// Problem Statment
// Prepare 250 Tons of tnt
// n boxes -> each haiving ai weight
// first k boxes goes to 1 truck
// second k boxes to next one 
// each truck have exactly k boxes -> n%k == 0
// max diffrence between two trucks -> maxmimum 
// 10 + 6 + 3 -> 19
// 3 + 2 + 1 -> 3
// so i think if we are getting more 

// What we need to find
// Apne ko array ko k blocks mai divide karna padega such that

// Approach 
// we can traverse each value of k and check what will happen 
// 

void solve(){
    int n;
    cin >> n;
    vector<int> ans(n);
    for(int i = 0; i < n ; i++){
        cin >> ans[i];
    }

    int result = 0;

    // try all block sizes k
    for(int k = 1; k <= n; k++){
        if(n % k == 0){ // valid block size
            vector<int> blockSums;
            int sum = 0, cnt = 0;

            for(int i = 0; i < n; i++){
                sum += ans[i];
                cnt++;
                if(cnt == k){
                    blockSums.push_back(sum);
                    sum = 0;
                    cnt = 0;
                }
            }

            int mn = *min_element(blockSums.begin(), blockSums.end());
            int mx = *max_element(blockSums.begin(), blockSums.end());
            result = max(result, mx - mn);
        }
    }
    cout << result << endl;
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