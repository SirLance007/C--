#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int maxi = 0;
    int total = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 1){
            sum++;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            total++;
        }
        else{
            total--;
        }
        if(total < 0){
            total = 0;
        }
        maxi = max(maxi , total);
    }
    cout << sum+maxi << endl;
}

int main() {
    solve();
    return 0;
}