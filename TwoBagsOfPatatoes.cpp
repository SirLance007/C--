#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cout << "Enter the maximum number of potatoes (n) and divisibility constraint (k): ";
    cin >> n >> k;

    vector<int> possible_x;

    // Iterate over possible values of s that are multiples of k and <= n
    for (int s = k; s <= n; s += k) {
        // x can range from 1 to s - 1
        for (int x = 1; x < s; x++) {
            int y = s - x;
            // Check if x and y are both >= 1
            if (y >= 1) {
                possible_x.push_back(x);
            }
        }
    }

    // Sort and remove duplicates if any
    sort(possible_x.begin(), possible_x.end());
    possible_x.erase(unique(possible_x.begin(), possible_x.end()), possible_x.end());

    // Output the possible values of x
    cout << "Possible values of x: ";
    for (int x : possible_x) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
