#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , x;
    cin >> n >> x;
    if( n > x){
        for(int i = 0; i < n ; i++){
            if(i != x){
                cout << i << " ";
            }
        }
        cout << x << endl;
    }
    else if( n == x ){
        for(int i = 0; i < n ; i++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}