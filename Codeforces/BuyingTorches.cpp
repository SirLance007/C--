#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long x , y , k;
    cin >> x >> y >> k;
    long long sticks_c = y*k;
    long long sticks_s =   - 1 + sticks_c;
    cout << sticks_s << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}