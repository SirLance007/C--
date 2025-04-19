#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m , k;
    cin >> n >> m >> k;
    if( m == 1){
        cout << "NO" << endl;
        return;
    }
    if(m > k){
        cout << "YES" << endl;
        return;
    }
    int diffParts = n%m != 0 ? ceil(n/m) : n/m;
    if( k >= diffParts ){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}