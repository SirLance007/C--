// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std ;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){

    int n , k ;
    cin >> n >> k ;

    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    vector<int> freq(n + 1 , 0) ;
    for(auto x : a){
        freq[x]++ ;
    }

    vector<int> pre(n + 1 , 0) ;
    for(int i = 1 ; i <= n ; i++){
        pre[i] = pre[i - 1] + freq[i] ;
    }

    int ans = 1 ;

    for(int d = n ; d >= 1 ; d--){

        int four = 4 * d ;
        int up = min((int)n , four - 1) ;
        // total = 0
        int total = 0;
        if(up >= 1){
            total = pre[up];
        }
        // same freq wale
        int same = freq[d] ;
        int tmp = 2 * d ;
        if(tmp <= n){
            same += freq[tmp] ;
        }
        // temp ki 3 se bhadao har baar
        tmp = 3 * d ;
        if(tmp <= n){
            // agar chota hai toh we can add
            same += freq[tmp] ;
        }
        int bad = total - same ;
        if(bad <= k){
            ans = d ;
            break ;
        }
    }
    cout << ans << endl ;
}


int32_t main(){
    fast ;
    int t ;
    cin >> t ;
    while(t--){
        solve() ;
    }
    return 0 ;
}
