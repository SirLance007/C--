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

// Observations
// Since constraints are very small 
// we just need to travel from the last of the string b and mark the points in the a string according to the order

void solve(){
    string a, b;
    cin >> a;
    cin >> b;
    int last = a.size()-1;
    
    for(int i = b.size()-1; i >= 0 ; i--){
        bool found = false;
        for(int j = last; j >= 0 ; j--){
            if(b[i] == a[j]){
                last = j-1;
                found = true;
                break;
            }
        }
        if(!found){
            // Need to add characters b[0..i] at the start
            cout << a.size() + i + 1 << endl;
            return;
        }
    }
    // All of b is a subsequence of a
    cout << a.size() << endl;
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        // cout << endl;
        // cout << "Case : " << t << endl;
        // cout << endl;
        solve();
    }
    return 0;
}