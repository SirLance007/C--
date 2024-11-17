#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isPangram(const string& str) {
    // Create a hash map to store the letters
    unordered_map<char, bool> letters;

    // Iterate through the string
    for (char c : str) {
        // Convert to lowercase to handle case-insensitivity
        char lowerChar = tolower(c);

        // If it's a letter, mark it in the hash map
        if (lowerChar >= 'a' && lowerChar <= 'z') {
            letters[lowerChar] = true;
        }
    }

    // If the map has all 26 letters, it's a pangram
    return letters.size() == 26;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPangram(input)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
