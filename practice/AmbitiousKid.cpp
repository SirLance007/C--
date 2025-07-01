#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char , int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    for(int i = 1 ; i < n-1  ; i++){
        if(mp[s[i]] > 1){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}