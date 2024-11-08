#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        int values[] = {a, b, c};
        sort(values, values + 3);  // Sort values in ascending order
        
        int increments = 5;
        
        for (int j = 0; j < increments; j++) {
            // Increment the smallest element to maximize product
            values[0]++;
            sort(values, values + 3);  // Re-sort after each increment
        }
        
        // Output the maximum product
        cout << values[0] * values[1] * values[2] << endl;
    }
    
    return 0;
}
2