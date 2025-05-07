#include<bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    string ans = "";
    for(int i = 0; i < st.length() ; i++){
        if(9-st[i] < st[i]){
            ans += 9-st[i]
        }
        else{
            ans += st[i];
        }
    }
    cout << ans << endl;
}

int main(){
    solve();
}