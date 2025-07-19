#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ans1(n), ans2(n);
    for(int i = 0; i < n ; i++) cin >> ans1[i];
    for(int i = 0; i < n ; i++) cin >> ans2[i];

    int index1 = 0, index2 = n - 1;

    // Find first mismatch from the start
    for(int i = 0; i < n ; i++) {
        if(ans1[i] != ans2[i]) {
            index1 = i;
            break;
        }
    }

    // Find first mismatch from the end
    for(int i = n - 1 ; i >= 0 ; i--) {
        if(ans1[i] != ans2[i]) {
            index2 = i;
            break;
        }
    }

    int mini = *min_element(ans1.begin() + index1, ans1.begin() + index2 + 1);
    int maxi = *max_element(ans1.begin() + index1, ans1.begin() + index2 + 1);

    while(index1 > 0 && ans1[index1 - 1] <= mini) {
        index1--;
        mini = min(mini, ans1[index1]);
    }

    while(index2 + 1 < n && ans1[index2 + 1] >= maxi) {
        index2++;
        maxi = max(maxi, ans1[index2]);
    }

    cout << index1 + 1 << " " << index2 + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
