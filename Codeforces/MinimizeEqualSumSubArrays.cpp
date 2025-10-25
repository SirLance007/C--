#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i ++){
        int num;
        cin >> num;
        ans.push_back(num);
    }
    for(int i = 1 ; i < n ; i++){
        cout << ans[i] << " " <<  endl;
    }
    cout << ans[0] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}