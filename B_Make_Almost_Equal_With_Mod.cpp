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

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observation
// 2 distinct chaiye eska mtlb last mai sirf 2 values hi bachni chaiye array mai 
// ye karne k eliye just ek digit ko chood kar baaki sari digits mod same anna chaiye 
// toh kul milake do mod alag honge bus
// digits -> odd , even , prime
// if all are even -> even nhi lege
// if all odd -> odd nhi lege
// most of the cases mai answer 2 hai just 0 and 1 remainder 
// jismai 2 nhi aa sakta eska mtlb sari values even hai
// ya phir sare values odd hai 
// abb agar 3 -> 0 , 1 , 2
// 60 90 98 120 308
// 0 0 2 0 2
// 



void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    int odd = 0;
    int even = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        if(x%2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    if(even >= 1 && odd >= 1){
        cout << 2 << endl;
        return;
    }
    for(int i = 1; i < 57 ; i++){
        int val = pow(2 , i);
        unordered_map<int , int> mp;
        for(int j = 0; j < n ; j++){
            mp[ans[j]%val]++;
        }
        if(mp.size() == 2){
            cout << val << endl;
            return;
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