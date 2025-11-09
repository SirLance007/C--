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

//  Observations
// A and b diya hai 
// we need to find an array jiska sum/n should be equal to a
// and median should be equal to b
// eska mtlb we want that 
// we can make an array od odd
// beecha wala b ke barbar hoga
// now just we need two more values 
// which we can take by 
// sum = n*a
// sum - b
// now we can divide them 


void solve(){
    int a , b;
    cin >> a >> b;
    if( a == b ){
        cout << a << endl;
        return;
    }
    int sum = 3*a;
    int bache_hue = sum-b;
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