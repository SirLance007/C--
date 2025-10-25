// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin >> n;

    int a = -1, b = -1, c = -1;

    // find first divisor
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = i;
            n /= i;
            break;
        }
    }

    // find second divisor
    if (a != -1) {
        for (int i = a + 1; i * i <= n; i++) {
            if (n % i == 0) {
                b = i;
                n /= i;
                break;
            }
        }
    }

    // remaining part is c
    if (a != -1 && b != -1 && n > 1 && n != a && n != b) {
        c = n;
        cout << "YES" << endl;
        cout << a << " " << b << " " << c << endl;
    } else {
        cout << "NO" << endl;
    }
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
