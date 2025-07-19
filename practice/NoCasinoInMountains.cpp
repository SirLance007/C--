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
    int total = 0;
    int count = 0;
    for(int i = 0; i < n ; i++){
        if(ans[i] == 0){
            count++;
            if(count == k){
                total++;
                count = 0;
                i++;
            }
        }
        else if(ans[i] == 1){
            count = 0;
        }
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