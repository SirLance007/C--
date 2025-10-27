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

// Observation
// har index ko zero bana hai
// we do only have two options 
// either delete diffrence form start or from last from ai
// pheli digit ki divide karo last digit n se 
// we want ki apne ko koi aisi digit mil jaye 
// we want ki sab last digit ke multiples aa jaye ya first digit se sare uske multiples ban jaye like 4 * 1 = 4 ...
// and to do that we need to understand

// if a[0] > a[n]
// x nikalna hai 
// so (n-1) * n
// agar ese chota hai leave it
// agar ese bada hai then we can try
// remainder nikalege index ke hisba se multiply karege minus karek check karege are we getting required value

void solve(){
    int n ;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    // for(int i = 0; )
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