#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& prefix) {
    int x;
    cin >> x;
    cout << prefix[x - 1] << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefix(n, 0);
    unordered_set<int> st;

    st.insert(arr[n - 1]);
    prefix[n - 1] = 1;

    for(int i = n - 2; i >= 0; i--) {
        prefix[i] = prefix[i + 1] + (st.find(arr[i]) == st.end() ? 1 : 0);
        st.insert(arr[i]);
    }

    while(m-- > 0) {
        solve(prefix);
    }

    return 0;
}
