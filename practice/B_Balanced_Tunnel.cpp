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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observations
// So basically brute force approahc is to know ki har car se phele kosi cars thi aur unko map mai store kara lo then jab bhi vo car aye we need to check ki ki usse phele wali sari cars exist kati haina
// But time complexity would be O(N^2)
// Optimized approach
// Ki apane pass order hai already cards ka
// We can strore them in the order array
// jab pheli baar apne koi koi car milti hai jismai vo apni jagah nhi hai
// then we will shift every other car by one

// Test case
// shift = 0;
// 3 5 2 1 4
// shift = 1
// 4 3
// shift = 2
// 4 3 2 5

// 3 -> 1  --> 3 -> 0 -> curr -> 0
// 5 -> 2  --> 5 -> 1 -> curr -> 1
// 2 -> 3  --> 2 -> 2 -> curr -> 2
// 1 -> 4. --> 1 -> 3 -> curr -> 3
// 4 -> 5  --> 4 -> 4 -> curr -> 4

// 4 -> 1  --> 4 -> 0
// 3 -> 2. --> 3 -> 1
// 2 -> 3  --> 2 -> 2
// 5 -> 4  --> 5 -> 3 -> i > 1 => diff -> i - curr -> overtake persons
// overtake persons - persons which we already counted -
// i - curr - total
// 1 -> 5. --> 1 -> 4

// Total -> 1 + 1
// Jistni gadiyo ne over take kar liya unko minus bhi karna hai

void solve()
{
    int n;
    cin >> n;
    vector<int> ans1(n), ans2(n);
    unordered_map<int, int> idx;

    for (int i = 0; i < n; i++) {
        cin >> ans1[i];
        idx[ans1[i]] = i; 
    }
    for (int i = 0; i < n; i++) cin >> ans2[i];

    int total = 0;
    int minIdx = LLONG_MAX; 

    for (int i = n - 1; i >= 0; i--) {
        int curr = idx[ans2[i]];
        // Agar ye ese phele aya hai toh we need to update
        if (curr > minIdx) total++;  
        minIdx = min(minIdx, curr);
    }

    cout << total << endl;
}

int32_t main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
    solve();
    // }
    return 0;
}