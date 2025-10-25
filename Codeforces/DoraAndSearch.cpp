#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve(){
    long long n , m;
    cin >> n >> m;
    vector<vector<long long>> ans(n , vector<long long> (m , 0));
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            long long x;
            cin >> x;
            ans[i][j] = x;
        }
    }
    // column wise sum
    vector<long long> op(m, 0);
    for(int j = 0; j < m ; j++){
        long long sum = 0;
        for(int i = 0; i < n ; i++){
            sum += ans[i][j];
        }
        op[j] = sum;
    }
    
    long long total = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ; j++){
            long long lama = ans[i][j] * (n - 1 - i) - (op[j] - ans[i][j]);
            total += abs(lama);
            op[j] -= ans[i][j];
        }
    }
    cout << total << endl;
    // total = 8-3 + 6-6 + 0 => 5
    // 6-5 + 4-4 + 8-2 => 7
    // 2 + 0 + 5 => 7 
    
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}
