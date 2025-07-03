#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> prefix(n) , suffix(n);
    prefix[0] = ans[0];
    for(int i = 1; i < n ; i++){
        prefix[i] = min(prefix[i-1] , ans[i]);
    }
    suffix[n-1] = ans[n-1];
    for(int i = n-2 ; i >= 0 ; i--){
        suffix[i] = max(suffix[i+1] , ans[i]);
    }
    string str = "";
    for(int i = 0; i < ans.size() ; i++){
        if(ans[i] == prefix[i] || ans[i] == suffix[i]){
            str += "1";
        }
        else{
            str += "0";
        }
    }
    cout << str << endl;
};

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
};