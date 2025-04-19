#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            ans.push_back(j);
        }
    }
    
    int maxi = 1;
    for(int i = 1 ; i < ans.size(); i++) {
        if(ans[i] - ans[i-1] > maxi){
            maxi = ans[i] - ans[i-1];
        }
    }
    if (maxi >= s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}



int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
