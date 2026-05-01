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
    int n;
    cin >> n;

    if(n == 1) cout << "WALK" << endl;
    else if(n == 2) cout << "no"<< endl;
    else if(n == 3) cout << "no"<< endl;
    else if(n == 4) cout << "no"<< endl;
    else if(n == 5) cout << "yes"<< endl;
    else if(n == 6) cout << "yes"<< endl;
    else if(n == 7) cout << "backwards"<< endl;
    else if(n == 8) cout << "7"<< endl;
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    // while(t--){
        solve();
    // }
    return 0;
}