#include<iostream>
using namespace std;

void solve(){
    string st ;
    cin >> st;
    int n = st.length()-2;
    string ans = "";
    for(i = 0; i < n; i++){
        ans += st[i];
    }
    ans += "i";
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t-- >= 0){
        solve();
    }
}