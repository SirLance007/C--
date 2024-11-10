#include <iostream>
using namespace std;

int main() {
    int t, l, r, L, R;
    cin >> t;  // Initialize 't' from input
    for (int i = 0; i < t; i++) {
        cin >> l >> r >> L >> R;

        if (r < L || R < l) {
            // No overlap
            cout << "0" << endl;
        } else {
            int overlap_start = max(l, L);
            int overlap_end = min(r, R);
            cout << (overlap_end - overlap_start + 1) << endl;
        }
    }
}
