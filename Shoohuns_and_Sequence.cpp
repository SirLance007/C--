    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int n, k;
        cin >> n >> k;
     
        // Ensure k is within bounds
        if (k < 1 || k > n) {
            cout << -1 << endl;
            return 0;
        }
     
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
     
        int first = arr[k - 1];
        int count = 0;
     
        for (int i = k - 1; i < n; i ++) {
            if (arr[i] != first) {
                cout << -1 << endl;
                return 0;
            }
        }

        for (int i = n-1; i >= 0; i--) {
            if (arr[i] != arr[i-1]) {
                cout << i << endl;
            }
        }
        
        return 0;
    }