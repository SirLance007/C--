// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n), x(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> x[i];

    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        v.push_back({abs(x[i]), a[i]});
    }

    sort(v.begin(), v.end());

    long long sum = 0;

    for(int i = 0; i < n; i++){
        sum += v[i].second;
        long long maxBullets = v[i].first * k;   

        if(sum > maxBullets){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
