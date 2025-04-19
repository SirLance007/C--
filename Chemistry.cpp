#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    string st;
    cin >> st;
    unordered_map<char , pair<int, int>> charCount;
    if(charCount)
    unordered_map<char, int> charCount;
    for (char ch : st) {
        charCount[ch]++;
    }

    int oddCount = 0;
    for (const auto& entry : charCount) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount > b) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// Prankuur sharma hello how are you

