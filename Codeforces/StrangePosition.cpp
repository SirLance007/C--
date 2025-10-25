#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    int minAns = 0;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        minAns += num/k;
        ans.push_back(num);
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}