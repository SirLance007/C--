#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans1;
    vector<int> ans2;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans1.push_back(num);
    }
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans2.push_back(num);
    }
    sort(ans1.begin() , ans1.end());
    sort(ans2.begin() , ans2.end());
    for(int i = 0; i < n; i++){
        if(ans1[i] != ans2[i]){
            ans1[i] = ans1[i]+1;
        }
    }
    if(ans1 == ans2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}