#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    int mini1 = min(a, b);
    int maxi1 = max(a,b);
    int mini2 = min(c,d);
    int maxi2 = max(c,d);
    if(mini1 > maxi2){
        cout << 4 << endl;
    }
    else if(mini2 > maxi2 ){
        cout << 0 << endl;
    }
    else{
        cout << 2 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}