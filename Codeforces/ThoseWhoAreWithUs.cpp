#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n , m;
    cin >> n >> m;
    vector<vector<int>> matrix;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            int x;
            cin >> x;
            matrix[i][j] = x;
        }
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}