// Hare Krishna // Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define fast \
    ios::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans.push_back(x);
    }
    
    int maxi = *max_element(ans.begin(), ans.end());
    vector<int> order;
    vector<int> op;
    
    for (int i = 0; i < n; i++) {
        if (ans[i] != maxi) {
            order.clear();
            bool found = false;  
            for (int j = i; j < n; j++) {
                order.push_back(ans[j]);
                if (ans[j] == maxi) {
                    i = j;  
                    reverse(order.begin(), order.end());
                    found = true;  
                    break;
                }
            }
            for (int j = 0; j < order.size(); j++) {
                op.push_back(order[j]);
            }
            if (found) maxi--;  
        } else {
            maxi--;
            op.push_back(ans[i]);
        }
    }
    
    for (auto it : op) {
        cout << it << " ";
    }
    cout << endl;
}

int32_t main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}