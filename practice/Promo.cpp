#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , q;
    cin >> n >> q;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
    }
    sort(ans.begin(),ans.end());
    for(int i = 0; i < q ; i++){
        int x , y;
        cin >> x >> y;
        int sum = 0;
        for(int j = n-x-1 ; j < y &&  ; j++){
            sum += ans[j];
        }
        cout << sum << endl;
    }
}

int main(){
    solve();
}