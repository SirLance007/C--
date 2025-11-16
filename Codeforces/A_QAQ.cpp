// Hare Krishna
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
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string st;
    cin >> st;
    int total = 0;
    int n = st.size();
    for(int i = 0; i < n ; i++){
        if(st[i] == 'Q'){
            total++;
        }
    }
    int q = 0;
    int sum = 0;
    for(int i = 0; i < n ; i++){
        if(st[i] == 'Q'){
            q++;
        }
        if(st[i] == 'A'){
            int left = q;
            int right = abs(total-q);
            if(left > 0 && right > 0){
                sum += left*right;
            }
        }
    }
    cout << sum << endl;
}

int32_t main(){
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}