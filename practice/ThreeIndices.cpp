#inlcude <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
    }
    for(int i = ; i < n-2 ; i++){
        for(int j = i+1 ; j < n-1 ; j++){
            for(int k = j+1 ; k < n ; k++){
                if(ans[i] < ans[j] && ans[j] > ans[k]){
                    cout << "YES" << endl;
                    cout << i << j << k << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}