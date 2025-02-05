#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    if(min(a,b) > max(c,d)){
        cout << 4 << endl;
    }
    else if(max(a,b) < min(c,d)){
        cout << 0 << endl;
    }
    else if( a == b && b == c && c == d){
        cout << 0 << endl;
    }
    else{
        int count = 0;
        if(a > c){
            count++;
            c = -1;
        }
        if( a > d){
            count ++;
            d = ;
        }
        if(b > c){
            count++;
            c = INT_MAX;
        }
        if(b > d){
            count++;
            d = INT_MAX;
        }
        cout << count << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}