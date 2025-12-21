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

// Operations
// explode -> wehn all become zero
// dec ai by i
// dec ai by n-i+1

// so jo bhi divide hoga vo 
// 1 2 3 4 5 
// 5 4 3 2 1

// The should be sorted in order either inc or either dec 
// now we need to see how much time the first element would take to become 0 
// it it takes 3 time
// then every element int the array should be divisible by thier index and the ans should be 3

// 1 2 3 4 5 
// 5 4 3 2 1
// 21 18 15 12 9

// Brute force if it is sorted and 
// i think we need to do only one operation of either types
void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    // first check if they are sorted or not 
    if(ans[0] > ans[1]){
        int diff = ans[1] - ans[0];
        for(int i = 1; i < n ; i++){ 
            if(ans[i-1] < ans[i] || ans[i] - ans[i-1] != diff){
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(ans[0] < ans[1]){
        int diff = ans[1] - ans[0];
        for(int i = 1; i < n ; i++){ 
            if(ans[i-1] > ans[i] || ans[i] - ans[i-1] != diff ){
                cout << "NO" << endl;
                return;
            }
        }
    }
    // ok now they are sorted in either way
    // check for ascending first
    if(ans[0] < ans[1]){
        bool found = false;
        int first = ans[0];
        for(int i = 1 ; i < n ; i++){
            if(first*(i+1) != ans[i]){
                found = true;
                break;
            }
        }
        if(!found){
            cout << "YES" << endl;
            return;
        }
        // now we need to perform operation 2

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

// Solutions are simple
// 5 12 