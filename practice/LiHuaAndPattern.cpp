#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int count = 0;

    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] != matrix[n-1-i][n-1-j]){
                count++;
            }
        }
    }

    count /= 2;

    if(count > k){
        cout << "NO" << endl;
    }
    else if((k - count) % 2 == 0 || n % 2 == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}
