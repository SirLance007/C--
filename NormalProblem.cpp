#include<bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    string ans = "";
    for(int i = 0; i < st.length(); i++){
        if(st[i] == 'q'){
            ans += 'p';
        }
        else if(st[i] == 'w'){
            ans += 'w';
        }
        else{
            ans += 'q';
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}