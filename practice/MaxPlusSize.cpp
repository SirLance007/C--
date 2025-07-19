#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int sum = 0;
    int maxi = 0;
    int count1 = 0;
    for(int i = 0; i < n ; i = i+2){
        sum += ans[i];
        count1++;
        maxi = max(ans[i] , maxi);
    }
    int sum2 = 0;
    int maxi2 = 0;
    int count2 = 0;
    for(int i = 1; i < n ; i = i+2){
        sum2 += ans[i];
        count2++;
        maxi2 = max(ans[i],maxi2);
    }
    cout << max(maxi+count1 , maxi2+count2) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}