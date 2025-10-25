#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int len = n-1;
    vector<int> ans(n);
    for (int i = 0; i < len; i++) {
        cin >> ans[i];
    }

    vector<int> result;
    result.push_back(ans[0] + 1);   
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += ans[i];
        if(ans[i] == 1){
            result.push_back()
        }
        result.push_back(sum);  
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
