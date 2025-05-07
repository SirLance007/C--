#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    int count = 0;
    bool found = false;
    int one = 0;
    for(int i = 0; i < n ; i++){
        if(st[i] == '1'){
            count++;
            if(i >0 && st[i-1] == '1' && st[i] == '1'){
                found = true;
            }
        }
    }
    if(count%2 != 0 ){
        cout << "NO" << endl;
        return;
    }
    if(count == 2 && found == true){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}