#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    // Build all possible shares
    vector<int> share_costs;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a[i]; j++){
            share_costs.push_back(b[i]);
        }
    }

    sort(share_costs.begin(), share_costs.end());

    // Build prefix sums
    vector<long long> prefix(share_costs.size() + 1, 0);
    for(int i = 0; i < share_costs.size(); i++){
        prefix[i+1] = prefix[i] + share_costs[i];
    }

    long long ans = 1LL * n * k; // worst case: tell everyone directly

    for(int x = 1; x <= n; x++){
        int need = n - x;
        if(need > (int)share_costs.size()) continue;
        long long cost = 1LL * x * k + prefix[need];
        ans = min(ans, cost);
    }

    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }

}