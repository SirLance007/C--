#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    
    string a;
    cin >> a;

    vector<int> ans(m);
    for(int i = 0; i < m; i++){
        cin >> ans[i];
    }

    string c;
    cin >> c;
    sort(c.begin(),c.end());
    unordered_map<char, int> mp;
    for(int i = 0; i < m; i++){
        if(mp.find(i) != mp.end()) {
            mp[i] = min(mp[i], c[i]);
        } else {
            mp[i] = c[i];
        }
    }

    string result = "";
    for(int i = 0; i < n; i++){
        if(mp.find(i) != mp.end()){
            result += to_string(mp[i]);
        } else {
            result += a[i];
        }
    }

    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
