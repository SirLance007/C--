#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k;
    cin >> n >> k;
    vector<long long> ans;
    for(int i = 0; i < n ; i++){
        long long x;
        cin >> x;
        ans.push_back(x);
    }
    long long mini = ans[0];
    long long maxi = ans[0];
    long long cnt = 0;
    for(int i = 1; i < n ; i++){
        maxi = max(maxi , ans[i]);
        mini = min(mini , ans[i]);
        long long avg = (maxi+mini)/2;
        if( abs(avg-maxi) > k || abs(avg - mini) > k){
            mini = ans[i];
            maxi = ans[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}