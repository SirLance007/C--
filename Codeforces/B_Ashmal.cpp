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
    vector<string> ans(n);
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }
    
    string op = ans[0];
    for(int i = 1; i < n; i++){
        
        string prepend = ans[i] + op;
        string append = op + ans[i];
        
        // if we add the string at first 
        if(prepend < append){
            op = prepend;
        }
        // if we add the string at last
        // top se left mai add karo then left se right mai add karo 
        else{
            op = append;
        }
    }
    // first print op 
    // then print then final one 
    cout << op << endl;
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