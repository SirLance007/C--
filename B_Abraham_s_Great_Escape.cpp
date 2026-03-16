// Hare Krishna
// Code by Prankur Sharma
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n, k;
    cin >> n >> k;

    if(n*n - k == 1){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    int printed = 0;
    int row = k / n;
    int col = k % n;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < n; j++) cout << "U";
        cout << "\n";
        printed++;
    }

    if(col > 0){
        for(int j = 0; j < col; j++) cout << "U";
        for(int j = col; j < n; j++){
            if(j == col) cout << "R";
            else cout << "L";
        }
        cout << "\n";
        printed++;
    }

    while(printed < n){
        for(int j = 0; j < n; j++){
            if(j == 0) cout << "R";
            else cout << "L";
        }
        cout << "\n";
        printed++;
    }
}

int32_t main(){
    fast;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
