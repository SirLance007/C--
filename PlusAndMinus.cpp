#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c;
    cin >> a >> b >> c;
    if(a + b == c){
        cout << "+" << endl;
    }
    else if(a - b == c) {
        cout << "-" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}