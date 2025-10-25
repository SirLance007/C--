#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k , j;
    cin >> n >> j >> k;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    if( k >= 2){
        cout << "YES" << endl;
        return;
    }
    else{
        int maxi = *max_element(ans.begin() , ans.end());
        if(maxi == ans[j-1]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}


int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}