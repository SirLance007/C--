#include <bits/stdc++.h>
using namespace std;

void solve(long n, long k) {
    vector<long> arr(n);
    unordered_map<long, long> freq; // HashMap to store element frequency
    long count = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        long complement = k - arr[i];
        if (freq[complement] > 0) {
            count++;
            freq[complement]--; 
        } else {
            freq[arr[i]]++;
        }
    }

    cout << count << endl;
}

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n, k;
        cin >> n >> k;
        solve(n, k);
    }
}
