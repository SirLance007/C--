#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
    }
    unordered_map<int> mp;
    for(int i = 0; i < n ; i++){
        mp[ans[i]]++;
    }
    for(auto pair : mp){
        maxi = max(pair.second);
    }
    if(maxi > mp.size()-1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}