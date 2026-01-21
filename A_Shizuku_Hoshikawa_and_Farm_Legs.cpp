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
    cin>>n;
    unordered_set<int> st;
    cout << 1 << " ";
    for(int i = 2; i <= n ; i++){
        if(st.find(i) != st.end()){
            continue;
        }
        cout << i << " ";
        st.insert(i);
        for(int j = i+1 ; j < n ; j++){
            if(j%i == 0 && st.find(j) == st.end()){
                cout << j << " ";
                st.insert(j);
            }
        }
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