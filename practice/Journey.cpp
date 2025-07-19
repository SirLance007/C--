#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , a , b , c;
    cin >> n >> a >> b >> c;
    long long round = a+b+c;
    long long remaining = n%round;
    long long days = n/round;
    if(remaining == 0){
        cout << days*3 << endl;
        return;
    }
    if(remaining/a == 0 || remaining%a == 0){
        cout << days*3+1 << endl;
        return;
    }
    if(remaining/(b+a) == 0 || remaining%(b+a) == 0){
        cout << days*3+2 << endl;
        return;
    }
    cout << days*3+3 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}