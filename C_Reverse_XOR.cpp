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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

inline long long reverseBinary(long long x) {
    long long r = 0;
    while (x) {
        r = (r << 1) | (x & 1);
        x >>= 1;
    }
    return r;
}

bool hasSolution(long long n) {
    if (n == 0) return true;
    
    int len = 64 - __builtin_clzll(n); // bit length of n
    int limit = (1LL << (len + 1));
    
    for (long long x = 1; x <= limit; ++x) {
        long long fx = reverseBinary(x);
        if ((x ^ fx) == n) return true;
    }
    return false;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (hasSolution(n) ? "YES\n" : "NO\n");
    }
    return 0;
}