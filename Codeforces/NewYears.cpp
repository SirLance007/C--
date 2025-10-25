#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if( n < 4041 ){
        cout << "NO" << endl;
        return;
    }
    if( n%2020 == 0){
        cout << "YES" << endl;
    }
    else if(n%2020 == 1){
        cout << "YES" << endl;
    }
    else if( n%2021 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}