#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c;
    cin >> a >> b >> c;
    if( a == b == c ){
        cout << -1 << endl;
        return;
    }
    if( a == b && a*2 == c){
        cout << c << endl;
        return;
    }
    if( a != b && b != c){
        cout << c+1 << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}