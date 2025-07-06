#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b , c , d;
    cin >> a >> b >> c >> d;
    long long minig = min(a , c);
    long long minif = min(b , d);
    if(minig >= minif){
        cout << "Gellyfish" << endl;
    }
    else{
        cout << "Flower" << endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}