// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }

    return primes;
}

void solve() {
    int n;
    cin >> n;

    // Case 1: Even number
    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }

    // Case 2: Odd number — find smallest prime factor
    vector<int> primes = sieve(n);
    int largest_prime = n; // assume n is prime

    for (auto p : primes) {
        if (n % p == 0) {
            largest_prime = p;
        }
    }
    // cout << largest_prime << endl;
    // return;
    // If n is prime itself
    if (largest_prime == n) {
        cout << 1 << " " << n - 1 << endl;
        return;
    }
    cout << largest_prime << " " << n - largest_prime << endl;
}

int32_t main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
