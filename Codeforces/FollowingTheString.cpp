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
    char prev = 'a';
    unordered_map<char , int> mp;
    string ans = "";
    for(int i = 0; i < n ; i++){
        if(ans[i] == 0){
            ans += prev;
            mp[prev]++;
            prev = prev+1;
        }
        else{
            for(auto pair : mp){
                if(pair.second == ans[i]){
                    ans += pair.first;
                    mp[pair.first]++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}