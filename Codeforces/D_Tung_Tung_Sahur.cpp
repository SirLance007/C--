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

// Observation simple hai
// Har p ke liye l mai jada se jada 2 baar aa sakta hai
// We need to make blocks 
// and we can indntify characters by knowing what is the first character
// 

void solve(){
    string p;
    string s;
    cin >> p >> s;
    vector<int> block1;
    vector<int> block2;
    int count = 0;
    char start = p[0];
    for(int i = 0; i < p.size() ; i++){
        if(p[i] == start){
            count++;
        }
        else{
            block1.push_back(count);
            count = 1;
            if(start == 'L'){
                start = 'R';
            }
            else{
                start = 'L';
            }
        }
    }
    if(count >= 1){
        block1.push_back(count);
    }
    count = 0;
    start = s[0];
    for(int i = 0; i < s.size() ; i++){
        if(s[i] == start){
            count++;
        }
        else{
            block2.push_back(count);
            count = 1;
            if(start == 'L'){
                start = 'R';
            }
            else{
                start = 'L';
            }
        }
    }
    if(count >= 1){
        block2.push_back(count);
    }
    // for(int val : block2 ){
    //     cout << val << " ";
    // }
    // cout << endl;
    if(p[0] != s[0]){
        cout << "NO" << endl;
        return;
    }
    if(block1.size() != block2.size()){
        cout << "NO" << endl;
        return;
    }
    char first;
    if(p[0] == 'L'){
        first = 'L';
    }
    else{
        first = 'R';
    }
    for(int i = 0; i < block1.size() ; i++){
        int val1 = block1[i];
        int val2 = block2[i];
        if(val2 > 2*val1 || val2 < val1){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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