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
    int n , d;
    cin >> n >> d;
    cout << "1" << " ";
    
    for(int i = 2 ; i < 10000 ; i++){
        if(i*)
    }
    if((d*n)%3 == 0){
        cout << "3" << " ";
    }
    int total = (n-1)*d;
    int twice = 2*d;
    if((total-twice)%7 == 0){
        cout << "7" << " ";
    }
    if((d*n)%9 == 0){
        cout << "9" ;
    }
    cout << endl;
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