#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b;
    cin >> a >> b;
    long long diff = abs(a-b);
    if(diff == 0){
        cout << "0" << " " << "0" <<  endl;
        return;
    }
    if(diff == 1){
        cout << "1" << " " << "0" << endl;
        return;
    }
    long long rem =  min(a , b) % diff;
    long long zero = min(a , b) ;
    long long final = llabs(rem * diff - min(a, b));
    cout << diff << " " << min(final , zero) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}