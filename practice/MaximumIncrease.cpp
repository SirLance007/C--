#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0  ; i < n; i++) {
        cin >> arr[i];
    }

    int count = 1;
    int maxi = 1;
    int first = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > first){
            count++;
        } else {
            count = 1;
        }
        first = arr[i];
        maxi = max(maxi, count);
    }

    cout << maxi << endl;
}

int main() {
    solve();
}
