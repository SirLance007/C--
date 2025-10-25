#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    long long mini = min(x, y);

    if(mini ==  x){
        if( k > a){
            
        }
        long long rem = k - a; 
        long long ans1 = rem / x; 
        ans1++; 
        long long value = x * ans1; 
        if(k - value >= b){
            long long ans2 = (k - value - b) / y;
            ans2++;
            cout << ans1 + ans2 << endl; 
        } else {
            cout << ans1 << endl;
        }
    }
    else {
        long long rem = k-b;
        long long ans1 = rem / y;
        ans1++;
        long long value = y * ans1;
        if(k - value >= a){
            long long ans2 = (k - value - a) / x;
            ans2++;
            cout << ans1 + ans2 << endl;
        } else {
            cout << ans1 << endl;
        }
    }
}

int main(){
    long long t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
    return 0;
}
