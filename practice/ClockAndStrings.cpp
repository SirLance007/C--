#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    bool one = false;
    bool two = false;
    while( a != b ){
        a++;
        a = a%12;
        if( a == c ){
            one = true;
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}


int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}