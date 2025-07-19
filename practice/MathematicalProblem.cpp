#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    long long total = 0;
    int one = 0;                          // ✅ fix 1: declare 'one'
    for(int i = 0; i < n ; i++){
        if(st[i] == '0' && n-2 > 1){
            cout << 0 << endl;
            return;
        }
        if(st[i] == '1'){
            one++; 
        }
    }
    if(one == n){
        cout << n << endl;
        return;
    }

    unordered_set<int> used;
    for(int i = 1 ; i < n ; i++){
        if(st[i] == '1' || st[i-1] == '1' && used.find(i) == used.end() && used.find(i-1) == used.end()){
            used.insert(i);
            used.insert(i-1);
            long long mul = (st[i]-'0')*(st[i-1]-'0');
            total += mul;
        }
        else if(used.find(i) == used.end()){
            total += st[i]-'0';
        }
    }
    // Don't forget position 0 if unused
    if(used.find(0) == used.end()){
        total += st[0]-'0';
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
