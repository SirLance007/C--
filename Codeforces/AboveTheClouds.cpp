#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char first = s[0];
    char last = s[n-1];
    string st = "";
    st += first;
    st += last;
    string ans = "";
    for(int i = 1 ; i < n-1; i++){
        ans += s[i];
    }
    if(ans.find(st) != string::npos){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}