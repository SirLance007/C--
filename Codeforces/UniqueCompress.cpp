#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(st.size() == 1){
        cout << st << endl;
    }
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n;j++){
            if(i+j == n){
                cout << i+j << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main(){
    solve();
}