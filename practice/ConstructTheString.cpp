#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , a , k;
    cin >> n >> a >> k;
    string ans = "";
    string result = "";
    int same = a-k;
    for (int i = 0; i < k; ++i) {
        ans += char('a' + i);
    }
    for (int i = k; i < n; ++i) {
        ans += ans[i % k];
    }
    result = ans;
    for(int i = 0; i < n-a ; i++){
        result += ans[i%a];
    }
    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}