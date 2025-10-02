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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Problem 
// need to find a , b such that a + b -> n
// lcm ( a , b) -> minimum

// Observations
// we can take any a , b from 1 to n-1
// so 


void solve(){
    int n;
    cin >> n;
    int a = 1;
    for (int g = 2; g * g <= n; ++g) {
      if (n % g == 0) {
        a = n / g;
        break;
      }
    }
    cout << a << ' ' << n - a << endl;
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