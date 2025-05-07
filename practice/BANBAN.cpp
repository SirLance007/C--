#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int total = 1;
    int count = 0;
    if( n == 1 ){
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    if(n%2 != 0){
        cout << n/2 + n%2 << endl;
        int j = 4;
        for(int i = 1; i <= 3*n-3 ; i+=5){
            cout << i << " ";
            cout << j << " " << endl;
            j+= 5;
        }
        cout << (3*n)-2 << " " << 3*n << endl;
    }
    else{
        cout << n/2 + n%2 << endl;
        int j = 4;
        for(int i  = 1; i <= 3*n ; i+=5){
            cout << i << " ";
            cout << j << " " << endl;
            j+= 5;
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