#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<limits>
using namespace std;

long long gcd(long long a, long long b) {
    while(b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve(){
    int n;
    cin >> n;
    vector<long long> ans(n);
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }

    if(n == 1){
        cout << 0 << endl;
        return;
    }

    int left = 0, right = n - 1;
    vector<long long> final;
    while(left < right){
        if(ans[left] != ans[right]){
            long long sub = abs(ans[right] - ans[left]);
            final.push_back(sub);
        }
        left++;
        right--;
    }

    if(final.empty()){
        cout << 0 << endl;
        return;
    }

    long long gcd_val = final[0];
    for(int i = 1; i < final.size(); i++){
        gcd_val = gcd(gcd_val, final[i]);
    }
    cout << gcd_val << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
