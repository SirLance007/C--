#include <bits/stdc++.h>

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
    int maxi = *max_element(ans.begin(), ans.end());
    for(int i = 1 ; i < n-1 ; i++){
        if(ans[i] == maxi){
            cout << "YES" << endl;
            cout << i  << " " << i+1 <<  " " << i+2 << endl;
            return;
        }
    }
    for(int i = 1; i < n-1 ; i++){
        int left = -1 , right = -1;
        for(int j = 0; j < i ; j ++){
            if(ans[j] < ans[i]){
                left = j;
                break;
            }
        }
        for(int j = i+1; j < n ; j++){
            if(ans[j] < ans[i]){
                right = j;
                break;
            }
        }
        if(left != -1 && right != -1){
            cout << "YES" << endl;
            cout << left + 1 << " " << i + 1 << " " << right + 1 << endl;
            return;
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