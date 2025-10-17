// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> ans(n);
    int maxi = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        cin >> ans[i];
        maxi = max(maxi, ans[i]);
    }

    // suffix[i] = max element from i to n-1
    vector<int> suffix(n);
    int currMax = LLONG_MIN;
    for (int i = n - 1; i >= 0; i--) {
        currMax = max(currMax, ans[i]);
        suffix[i] = currMax;
    }
    for(auto it : suffix){
        cout << it << " ";
    }
    cout << endl;
    return;
    unordered_set<int> idx;

    for (int i = 0; i < n; i++) {
        if (ans[i] == maxi) {
            // mark all contiguous max elements
            while (i < n && ans[i] == maxi) {
                idx.insert(i);
                i++;
            }

            if (i + 1 >= n) break;

            int next_max = suffix[i + 1];
            int j = i + 1;

            while (j < n) {
                if (ans[j] == next_max) {
                    while (j < n && ans[j] == next_max) {
                        idx.insert(j);
                        j++;
                    }
                    if (j + 1 < n)
                        next_max = suffix[j + 1];
                    else
                        break;
                } else j++;
            }
            break;
        }
    }
    for(auto it : idx){
        cout << it << " ";
    }
    cout << endl;
    return;
    vector<int> rem;
    for (int i = 0; i < n; i++) {
        if (idx.find(i) == idx.end())
            rem.push_back(ans[i]);
    }

    int total = 0;
    for (int i = 1; i < (int)rem.size(); i++) {
        if (rem[i - 1] < rem[i])
            total++;
    }

    cout << total << endl;
}

int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
