#include<bits/stdc++.h>
using namespace std;

void solve() {
    string st;
    cin >> st;
    map<int, int> mp;
    string ans = "";

    // Populate the map with frequencies of digits in the string
    for (int i = 0; i < 10; i++) {
        mp[st[i] - '0']++;
    }

    int j = 9;
    for (int i = 0; i < 10; i++) {
        // If the current digit is not equal to j
        if (st[i] - '0' != j) {
            if (mp.find(j) != mp.end()) {
                ans += to_string(j);
                mp[j]--;
                if (mp[j] == 0) {
                    mp.erase(j); // Corrected here
                }
            } else {
                // Try to find a larger digit to add
                for (auto pair : mp) {
                    if (pair.first > j) {
                        ans += to_string(pair.first); // Corrected here to use to_string
                        mp[pair.first]--;
                        if (mp[pair.first] == 0) {
                            mp.erase(pair.first);
                        }
                        break;
                    }
                }
            }
        } else {
            ans += st[i];
            mp[st[i]]--;
            if(mp[st[i]] == 0){
                mp.erase(st[i]);
            }
        }
        j--;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}
