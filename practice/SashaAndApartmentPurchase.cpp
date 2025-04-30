#include<bits/stdc++.h>
using namespace std;
#define long long as ll;

void solve(){
    ll  n , k;
    cin >> n >> k;
    vector<ll> ans;
    for(ll i = 0; i < n ; i++){
        ll num;
        cin >> num;
        ans.push_back(num);
    }
    vector<long long> prefix(n, 0);
    prefix[0] = ans[0];
    for (ll i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + ans[i];
    }
    ll mini = INT_MAX;
    vector<ll> sum;
    for (ll i = 0; i < n; i++) {
        ll left = (1LL * a[i] * i) - (i > 0 ? prefix[i-1] : 0);
        ll right = (prefix[n-1] - prefix[i]) - (1LL * a[i] * (n - i - 1));
        ll total = left + right;
        sum.push_back(total);
        mini = min(mini , total);
    }
    ll count = 0;
    for(ll i = 0; i < n ; i++){
        if(sum[i] <= mini ){
            count++;
        }
        else{
            if(sum[i] - (prfix[n-1] - prefix[k-1]) <= mini){
                count++;
            }
        }
    }
    cout << count << endl;
}

int main(){

}