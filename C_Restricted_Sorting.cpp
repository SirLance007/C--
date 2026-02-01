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
    int n;
    cin >> n;
    vector<int> a(n);
    int minval = 2e9;
    int maxval = -2e9;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        minval = min(minval, a[i]);
        maxval = max(maxval, a[i]);
    }
    
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            sorted = false;
            break;
        }
    }
    
    if (sorted) {
        cout << -1 << endl;
        return;
    }
    
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        st.push(a[i]);
    }
    
    queue<int> q;
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    
    vector<int> temp;
    while (!q.empty()) {
        temp.push_back(q.front());
        q.pop();
    }
    
    vector<int> b = temp;
    sort(b.begin(), b.end());
    
    int left = 1, right = 1000000000;
    int ans = 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        int upper = maxval - mid;
        int lower = minval + mid;
        
        bool valid = true;
        
        if (upper < lower) {
            for (int i = 0; i < n; i++) {
                if (temp[i] > upper && temp[i] < lower) {
                    if (temp[i] != b[i]) {
                        valid = false;
                        break;
                    }
                }
            }
        }
        
        if (valid) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << ans << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}