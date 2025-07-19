#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int cnt ;
    for(int i = 0; i < n ; i++){
        cnt = 0;
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                if(abs(ans[i] - ans[j])%k != 0){
                    cnt++;
                }
            }
        }
        if(cnt == n-1){
            cout << "YES" << endl;
            cout << i+1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t ;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}