#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c ;
    cin >> a >> b >> c;
    int mini = min(a , min(b , c));
    int maxi = max(a , max(b , c));
    int ans = INT_MAX;
    for(int i = mini ; i <= maxi ; i++){
        int dist1 = abs(a - i);
        int dist2 = abs(b - i);
        int dist3 = abs(c - i);
        ans = min(ans , dist1 + dist2 + dist3);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}