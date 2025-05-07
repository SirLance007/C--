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
    sort(ans.begin(),ans.end());
    int cas1 = abs(ans[n-2] - ans[0]);
    int case2 = abs(ans[1] - ans[n-1]);
    cout << min(case1 , case2) << endl;9
}

int main(){
    solve();
}