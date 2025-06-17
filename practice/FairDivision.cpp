#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int one = 0, two = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 1) one++;
        else if(x == 2) two++;
    }

    int totalSum = one * 1 + two * 2;
    if(totalSum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    int target = totalSum / 2;

    for(int i = 0; i <= two; i++) {
        int currSum = i * 2;
        if(currSum > target) break;
        if(target - currSum <= one) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
