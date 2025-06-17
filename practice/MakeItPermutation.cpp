#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << n * 2 - 1 << endl;
    for(int i = 1 ; i <= n ; i++){
        cout << i << " " << 1 << " "<< i << endl;
        if(i != n){
            cout << i << " " << i + 1 << " " << n << endl;
        }
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