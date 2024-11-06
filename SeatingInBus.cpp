#include <iostream>
#include <vector>
#include <cmath> // For abs
using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> arr(n); // Correctly initialize the vector with size n
        for (int j = 0; j < n; j++) {
            cin >> arr[j]; // Populate the vector
        }
        bool isValid = true; // Flag to check if the condition holds
        for (int j = 1; j < n; j++) { // Loop from 1 to n-1
            if (abs(arr[j] - arr[j - 1]) != 1) { // Compare with the previous element
                cout << "Yes" << endl;
                isValid = false; // Set the flag to false if the condition fails
                break; // Exit the loop if the condition is not met
            }
        }
        if (isValid) { // Only print "Yes" if the condition held for all elements
            cout << "Yes" << endl;
        }
    }
    return 0; // Good practice to return 0 from main
}
