#include <bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    if(n%2 == 0){
        if(k%2 != 0){
            cout << 1 + ceil(n/k) << endl;
        }
        else{
            cout << ceil(n/(k-1)) << endl;
        }
    }
    else{
        if(k%2 != 0){
            n -= k;
            cout << 1 + ceil(n/(k-1)) << endl;
        }
        else{
            n -= k-1;
            cout << 1 + ceil(n/(k)) << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}