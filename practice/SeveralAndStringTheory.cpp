#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string st, rev;
    cin >> st;
    rev = st; // Copy st to rev
    reverse(rev.begin(), rev.end()); // Now reverse rev

    if(st < rev){
        cout << "YES" << endl;
        return; // Stop here, no need to continue
    }
    unordered_set<int>num;
    int total = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1 ;j < n ; j++){
            if(st[i] > rev[j] && num.find(j) == num.end()){
                total++;
                num.insert(j);
                break;
            }
        }
    }
    if(total % 2 != 0 || total/2 > k){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
