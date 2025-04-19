#include<bits/stdc+.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
    }
    int median = k/2;
    int total = 0;
    for(int i = median  ; i < n ; i+= k){
        total += ans[i];
    }
    cout << total << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}