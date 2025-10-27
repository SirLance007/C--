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

// K length ka subsequence vo choose kar sakta hai 
// 11011
// if at each turn bob manages to convert number of ones in the string to be grater than k
// then alice could not win
// So to prevent bob doing this alice would choose k numbers such that they are not continuous
// test case
// 111111 k->4
// 0 0 1 0 1 0 
// b will chose k of 4
// 1 1 1 1 1 0
// 0 0 1 0 0 0
// 1 1 1 1 0 0 
// 0 0 0 0 0 0


void solve(){
    int n , k;
    cin >> n >> k;
    string st;
    cin >> st;
    int cnt = 0;
    for(int i = 0; i < n ; i++){
        if(st[i] == '1'){
            cnt++;
        }
    }
    if(cnt <= k || n < 2*k){
        cout << "Alice" << endl;
    }
    else{
        cout << "Bob" << endl;
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