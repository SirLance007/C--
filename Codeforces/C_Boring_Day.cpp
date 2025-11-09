// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n , l , r;
    cin >> n >> l >> r;
    vector<int> ans(n);
    for(int i = 0; i < n ; i++) cin >> ans[i];

    int curr = 0;
    int left = 0;
    int count = 0;

    for(int i = 0; i < n ; i++){
        curr += ans[i];
        while(curr > r && left <= i){
            curr -= ans[left];
            left++;
        }
        if(curr >= l && curr <= r){
            count++;
            curr = 0;     
            left = i + 1; 
        }
    }

    cout << count << endl;
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
