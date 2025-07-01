#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        if( s > x[n-1]){
            cout << s-x[0] << endl;
        }
        else if( s < x[0]){
            cout << x[n-1] - s << endl;
        }
        else {
            int ans1 = s-x[0];
            int ans2 = x[n-1] - s;
            int ans = min(ans1, ans2);
            if(ans1 == ans){
                ans = 2*ans;
                cout << ans + ans2 << endl;
            }
            else{
                ans = 2*ans;
                cout << ans + ans1 << endl;
            }
        }
    }
    return 0;
}
