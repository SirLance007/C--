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
// Regestration -> OK
// If name exists -> name1
// insert it in the database

unordered_map<string , int> mp;

void solve(){
    string st;
    cin >> st;
    if(mp.find(st) == mp.end()){
        cout << "OK" << endl;
        mp[st]++;
        return;
    }
    else{
        string op = st;
        string result = "";
        for(int i = 0; i < op.size() ; i++){
            if(op[i] >= 'a' && op[i] <= 'z'){
                result += op[i];
            }
            else{
                break;
            }
        }
        // cout << "Result : " <<  result << endl;
        int freq = mp[result];
        string final = result + to_string(freq);
        cout << final << endl;
        mp[result]++;
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