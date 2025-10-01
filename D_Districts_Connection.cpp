// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observations
// Col wise jo maximum mil rha hai vo karna hai
// row mai se max nikalna hai 


void solve(){
    int n , m;
    cin >> n >> m;
    vector<vector<int>> ans ( n , vector<int> (m , 0));
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            int x;
            cin >> x;
            ans[i][j] = x;
        }
    }
    vector<int> sequence;
    for(int i = 0; i < m ; i++){
        int maxi = 0;
        int row = 0;
        for(int j = 0; j < n ; j++){
            if(ans[j][i] > maxi){
                row = i;
                maxi = ans[j][i];
            }
        }
        sequence.push_back(row);
    }
    int idx = 0;
    int total = 0;
    int multi = n*m;
    for(int i = sequence[idx] ; i < n ; i++){
        for(int j = 0; j < m ; j++){
            total += multi*ans[i][j];
            multi--;
        }
        idx++;
        if(idx == n){
            cout << total << endl;
            return;
        }
    }
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}