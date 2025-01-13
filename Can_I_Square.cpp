#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long count = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        count += num;
    }
    long long st = 1;
    long long end = count;
    while(st <= end) {
        long long mid = st + (end - st) / 2;
        if(mid == count/mid) {
            cout << "YES" << endl;
            return;
        }
        if(mid  < count/mid) {
            st = mid;
        } else {
            end = mid ;
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
}
