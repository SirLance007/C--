#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    set<char> unique(str.begin(), str.end());
    string r(unique.begin(), unique.end());

    unordered_map<char, char> mp;
    int l = 0, h = r.size() - 1;
    while (l < h) {
        mp[r[l]] = r[h];
        mp[r[h]] = r[l];
        l++;
        h--;
    }
    if (l == h) mp[r[l]] = r[l];

    for(char c : str) cout << mp[c];
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}
