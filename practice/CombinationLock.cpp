#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%2 == 0){
        cout << -1 << endl;
    }
    else{
        for(int i = n ; i >= 1; i--){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}