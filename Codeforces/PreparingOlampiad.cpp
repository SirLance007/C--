#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> first;
    vector<int> second;
    int sum = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        first.push_back(x);
    }
    for(int i = 0; i < n ; i++){
        int y;
        cin >> y;
        second.push_back(y);
    }
    for(int i = 0; i < n ; i++){
            if(i + 1 < n){
                if(first[i] > second[i+1]){
                sum += (first[i]-second[i+1]);
            }
            }
    }
    sum += first[n-1];
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}