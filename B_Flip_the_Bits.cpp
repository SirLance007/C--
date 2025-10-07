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
using namespace std;
#include <climits>

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observation
// so jaha number same hai zeros aur one ka apan vhi hi digits change kar sakte hai vo bhi only prefix one
// jha par last change hai values ka vha par we need to check whether count of 0 and 1 are same or not
// ek pair ko change karne ke liye we need another diffrent pair 
// plus the pair should be inverted

void solve(){
    int n;
    cin >> n;
    string st1 , st2;
    cin >> st1 >> st2;
    int type1 = 0;
    int type2 = 0;
    for(int i = 0; i < n ; i++){
        if(st1[i] == '0' && st2[i] == '1'){
            type1++;
        }
        else if(st1[i] == '1' && st2[i] == '0'){
            type2++;
        }
    }
    if(type1 == type2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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