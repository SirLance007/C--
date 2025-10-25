#include<bits/stdc++.h>
using namespace std;

bool check(int num){
    if(num==1) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false;
    }
    return true;
}

void solve(){
    int n , k;
    cin >> n >> k;
    if((n==1 && k==2) || (check(n) && k == 1)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}