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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Approach
// Calculate har array kitna maximum sum de paa rha hai
// agar same hai toh dono ko kisi bhi order mai lo koi farak nhi padega
// According to their sum unko lena hai

struct Block {
    int sum;   // total sum of elements in the array
    int self;  // internal score of this array alone
    int idx;   // index of the array (not really needed, but kept for clarity)
};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<Block> blocks;

    for (int i = 0; i < n; i++) {
        vector<int> arr(m);
        for (int j = 0; j < m; j++) cin >> arr[j];

        int sum = 0, self = 0, prefix = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[j];
            prefix += arr[j];
            self += prefix;
        }
        blocks.push_back({sum, self, i});
    }

    // sort by total sum descending
    sort(blocks.begin(), blocks.end(), [](auto &a, auto &b) {
        return a.sum > b.sum;
    });

    int ans = 0, prefix = 0;
    for (auto &blk : blocks) {
        ans += blk.self + prefix * m; 
        prefix += blk.sum;
    }

    cout << ans << "\n";
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Test case : " << t << endl;
        solve();
    }
    return 0;
}