#include<iostream>
using namespace std;

void solve(){
    long n ;
    cin >> n;
    long x , y;
    cin >> x >> y;
    if(x >= y){
        if( n % y == 0){
            cout << n / y << endl;
        }
        else{
            cout << (n / y) + 1 << endl;
        }
    }
    else{
        if( n % x == 0){
            cout << n / x << endl;
        }
        else{
            cout << (n / x) + 1 << endl;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}