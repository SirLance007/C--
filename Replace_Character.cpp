#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Step 1: Count frequencies of all characters
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }

    // Step 2: Find the character with the maximum frequency
    char maxFreqChar = s[0];
    int maxFreq = 0;
    for (auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxFreqChar = pair.first;
        }
    }
    cout << maxFreqChar << endl;
    // Step 3: Replace one character to maximize the frequency of `maxFreqChar`
    for (int i = 0; i < n; i++) {
        if (s[i] != maxFreqChar ) {
            s[i] = maxFreqChar;
            break; // Only one replacement is allowed
        }
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
