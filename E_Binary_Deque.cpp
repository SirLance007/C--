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

// Problem
// we only have zero and one
// on one operation either remove first or last element
// we need to tell that after performing all the operations
// we need to perform minimum operations

// Approach 
// how many one we need to remove
// first pointer at first
// second pointer at last
// if we get next as a one then inc or dec that indx
// if we get 

void solve(){
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0, curr_sum = 0, max_len = -1;

    for (int right = 0; right < n; right++) {
        curr_sum += a[right];

        while (curr_sum > s && left <= right) {
            curr_sum -= a[left];
            left++;
        }

        if (curr_sum == s) {
            max_len = max(max_len, right - left + 1);
        }
    }

    if (max_len == -1) cout << -1 << "\n";
    else cout << n - max_len << "\n";
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

// 0 1 0 1 1 1 0 0 1
// 