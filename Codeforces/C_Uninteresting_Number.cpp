// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

unordered_map<long long, int> dp;

bool solve1(int two, int three, int sum) {
    sum = (sum % 9 + 9) % 9;
    if (sum == 0) return true;

    long long key = sum * 1000000000LL + two * 1000LL + three;
    if (dp.count(key)) return dp[key];

    bool res = false;
    if (two > 0) res |= solve1(two - 1, three, (sum + 2) % 9);
    if (three > 0) res |= solve1(two, three - 1, (sum + 6) % 9);

    return dp[key] = res;
}

void solve() {
    string st;
    cin >> st;
    int one = 0, two = 0, three = 0, total = 0;

    for (char c : st) {
        total += c - '0';
        if (c == '1') one++;
        if (c == '2') two++;
        if (c == '3') three++;
    }

    int rem = total % 9;
    if (rem == 0) {
        cout << "YES\n";
        return;
    }

    dp.clear();
    bool ok = solve1(two, three, rem);
    cout << (ok ? "YES\n" : "NO\n");
}

int32_t main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
