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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> freq;           // element -> frequency
    map<int, set<int>> group;               // frequency -> all elements with that freq
    int maxFreq = 0;
    vector<int> ans;

    int left = 0;
    for (int right = 0; right < n; right++) {
        int x = a[right];
        int oldFreq = freq[x];
        int newFreq = ++freq[x];

        if (oldFreq > 0) group[oldFreq].erase(x);
        group[newFreq].insert(x);
        if (group[oldFreq].empty()) group.erase(oldFreq);

        maxFreq = max(maxFreq, newFreq);

        // when window size == k
        if (right - left + 1 == k) {
            ans.push_back(*group[maxFreq].begin()); 

            int y = a[left++];
            int oldF = freq[y];
            int newF = oldF - 1;

            group[oldF].erase(y);
            if (group[oldF].empty()) {
                group.erase(oldF);
                if (oldF == maxFreq) maxFreq--; 
            }

            if (newF > 0) {
                freq[y] = newF;
                group[newF].insert(y);
            } else {
                freq.erase(y);
            }
        }
    }

    for (auto x : ans) cout << x << " ";
    cout << endl;
}

int32_t main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
    solve();
    // }
    // return 0;
}