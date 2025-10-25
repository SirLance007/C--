#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    string ans = st;
    sort(ans.begin() , ans.end());
    if(ans == st){
        cout << "NO" << endl;
        return;
    }
    int first = st[0];
    for(int i = 1 ; i < n ; i++){
        if(st[i] >= first){
            first = st[i];
        }
        else{
            cout << "YES" << endl;
            cout << i << " " << i+1 << endl;
            return;
        }
    }
}

int main(){
    solve();
}