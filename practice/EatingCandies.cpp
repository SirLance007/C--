#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    unordered_map<long long, pair<long long, long long>> mp;
    unordered_map<long long, long long> freq;
    vector<long long> ans;
    set<long long> unique;  

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (mp.find(x) == mp.end()) {
            mp[x].first = i;
            mp[x].second = i;
        } else {
            mp[x].second = i;
        }

        freq[x]++;
        unique.insert(x); 
        ans.push_back(x);
    }

    for (auto x : unique) {
        if (freq[x] == 1) {
            cout << -1 << '\n';
            return;
        }
    }

    long long num = ans[0];
    long long index2 = mp[num].second;
    cout << index2 + 1 << " ";

    for (int i = 1; i < n; i++) {
        if (ans[i] == ans[i - 1]) {
            cout << i << " "; 
        } else {
            long long num = ans[i];
            long long index2 = mp[num].second;
            cout << index2 + 1 << " ";
        }
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}



// ios::sync_with_stdio(false);
    // cin.tie(nullptr);