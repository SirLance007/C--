#include<bits/stdc++.h>
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
    for(int i = 1 ; i < n ; i++){
        if(ans[i] < ans[i-1]){
            cout << 0 << endl;
            return;
        }
    }
    int mini = INT_MAX;
    int index1 = 0;
    int index2 = 0;
    for(int i = 1; i < n ; i++){
        if(ans[i] - ans[i-1] < mini){
            mini = ans[i] - ans[i-1];
            index1 = ans[i];
            index2 = ans[i-1];
        }
    }
    int mid = round(abs(index1 + index2)/2);
    if((index1 + index2)%2 == 0){
        cout << abs(mid - index1)+1 << endl;
    }
    else{
        cout << abs(mid - index1) << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}