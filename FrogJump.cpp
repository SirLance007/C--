#include <iostream>
using namespace std;

int main() {
    long long t, a, b, k;
    cin >> t;  // Read the number of test cases
    for (int i = 0; i < t; i++) {
        cin >> a; 
        cin >> b ;
        cin >> k; 
        long long sum = 0;
        if (k % 2 == 0) {
            sum = (k / 2 * a) - (k / 2 * b);
        } else {
            sum = ((k / 2 + 1) * a) - (k / 2 * b);
        }
        cout << sum << endl;
    }
    return 0;
}
