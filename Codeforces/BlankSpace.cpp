#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    int count = 0;
    int maxi = 0;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        if(num == 0){
            count ++;
        }
        else{
            count = 0;
        }
        maxi = max(maxi , count);
    }
    cout << maxi << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}