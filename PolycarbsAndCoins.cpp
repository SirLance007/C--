#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int ans = n / 3;
        if(n % 2 != 0 && n<10){
            cout << ans << " " << ans+1 << endl;
        }
        if(n % 2 == 0){
            cout << ans+1 << " " << ans << endl;
        }
        else {
            cout << ans << " " << ans << endl;
        }
    }
    return 0;
}
