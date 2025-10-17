// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observation 
// If n -> even -> then multiply either by closest 10 or by closest number having 5 as ones digit

// if n -> odd -> multiply by closest 10

// n even ho ya odd -> 10 ke liye same rahega
// n agar even hai toh we will get one more zero
// 45 * 10
// 45 * 5

void solve(){
    int n , m;
    cin >> n >> m;
    
    // Edges cases 
    // m < 10
    if(m < 10){
        if(n%2 == 0){
            cout << n*5 << endl;
        }
        else{
            cout << n*m << endl;
            return;
        }
    }
    // if n -> even && m >= 10
    if(n%2 == 0 && m >= 10){
        if(m%10 == 0){
            cout << n*m << endl;
            return;
        }
        int rem = n%10;
        int mul = n-rem;
        
    }
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