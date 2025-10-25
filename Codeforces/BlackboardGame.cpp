#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << (n % 4 ? "Alice" : "Bob") << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}