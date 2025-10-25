#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll n , k;
    cin >> n >> k;
    vector<ll> ans;
    unordered_map<ll , vector<ll> > mp;
    for(ll i = 0; i < n ; i++){
        ll x;
        cin >> x;
        ans.push_back(x);
        ll rem = x%k;
        mp[rem].push_back(i);
    }
    if( k == 1){
        for(ll i = 0; i < n ; i++){
            cout << i+1 << " ";
        }
        cout << endl;
        return;
    }
    vector<ll> zero = mp[0];
    sort(zero.begin() , zero.end());
    for(ll i = 0; i < zero.size() ; i++){
        cout << zero[i]+1 << " ";
    }
    vector<ll> rem;
    for(auto pair : mp){
        rem.push_back(pair.first);
    }
    sort(rem.begin() , rem.end() , greater<ll>());
    for(ll i = 0; i < rem.size() ; i++){
        if(rem[i] == 0) continue;
        vector<ll> op = mp[rem[i]];
        sort(op.begin() , op.end());
        for(ll j = 0; j < op.size() ; j++){
            cout << op[j]+1 << " ";
        }
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}