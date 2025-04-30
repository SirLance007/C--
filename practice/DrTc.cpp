#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    int one = 0;
    for(int i = 0; i < n ; i++){
        if(st[i] == '1'){
            one++;
        }
    }
    int total = 0;
    for(int i = 0; i < n ; i++){
        if(st[i] == '0'){
            total += one+1;
        }
        else{
            total += one-1;
        }
    }
    cout << total << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}