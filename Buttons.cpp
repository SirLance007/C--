#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c ;

    
    if( a == b && c%2 == 0){
        cout << "Second" << endl;
    }
    else if( a == b && c%2 != 0 ){
        cout << "First" << endl;
    }
    else if( a < b + c){
        cout << "Second" << endl;
    }
    else if( a > c + b){
        cout << "First" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}