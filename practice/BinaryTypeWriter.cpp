#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    int one = 0;
    int zero = 0;
    int one_zero = 0;
    int zero_one = 0;
    int operations = 0;
    for(int i = 0; i < n ; i++){
        if(st[i] == '1'){
            one++;
        }
        if(st[i] == '0'){
            zero++;
        }
    }
    if(st[0] != '0'){
        operations++;
    }
    for(int i = 1; i < n ; i++){
        if(st[i] == '1' && st[i-1] == '0'){
            zero_one++;
            operations++;
        }
        if(st[i] == '0' && st[i-1] == '1'){
            one_zero++;
            operations++;
        }
    }
    operations += n;
    if(one == 1 && zero == 1){
            cout << operations+n << endl;
    }
    if( zero == 1 && one > 1){
            cout << n+1 << endl;
            return;
    }
    if( one == 1  && zero > 1){
            cout << n+1 << endl;
            return;
    }
    if(one != 0 && zero == 0){
            cout << n+1 << endl;
    }
    else if(one == 0 && zero != 0){
            cout << n << endl;
    }
    
    else{
            cout << operations-1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}