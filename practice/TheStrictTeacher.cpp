#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m , k;
    int l ,r;
    cin >> n >> m >> k;
    cin >> l >> r ;
    cin >> k;

    int mini = min(l,r);
    int maxi = max(l,r);
    if( k > l && k < r){
        int ans = max(k-l , r-k);
        cout << ans/2 << endl;
        return;
    }
    if( mini > k){
        cout << mini-k << endl;
    }
    else if( k > maxi){
        cout << n-maxi << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}