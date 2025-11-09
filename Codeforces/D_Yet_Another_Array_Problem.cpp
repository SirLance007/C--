// Hare Krishna
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

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

// ans could be 2 3 5
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    bool allZero = true;
    for(auto x : a) if(x != 0) allZero = false;
    if(allZero){
        cout << -1 << "\n";
        return;
    }

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for(auto p : primes){
        bool found = false;
        for(auto x : a){
            if(gcd(abs(x), p) == 1){
                found = true;
                break;
            }
        }
        if(found){
            cout << p << "\n";
            return;
        }
    }

    // fallback if somehow not found among first primes
    for(int p = 53; p <= 1000; p++){
        bool isPrime = true;
        for(int i = 2; i * i <= p; i++){
            if(p % i == 0){ isPrime = false; break; }
        }
        if(!isPrime) continue;

        bool found = false;
        for(auto x : a){
            if(gcd(abs(x), p) == 1){
                found = true;
                break;
            }
        }
        if(found){
            cout << p << "\n";
            return;
        }
    }

    cout << -1 << "\n";
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
