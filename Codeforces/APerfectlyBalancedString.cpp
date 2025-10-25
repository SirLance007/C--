#include<bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    int n = st.size();
    unordered_map<char , int> mp;
    for(int i = 0; i < st.size() ; i++){
        mp[st[i]]++;
    }
    if(mp.size() == 1){
        cout << "YES" << endl;
        return;
    }
    if(mp.size() == n){
        cout << "YES" << endl;
        return;
    }
    if(mp.size() == 2){
        for(int i = 1 ; i < n ; i++){
            if(st[i-1] == st[i]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        return;
    }
    for(int i = 1  ; i < n-1 ; i++){
        if(st[i-1] == st[i] || st[i-1] == st[i+1]){
            cout << "NO" << endl;
            return;
        }
    }
    if(st[n-1] == st[n-2]){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}