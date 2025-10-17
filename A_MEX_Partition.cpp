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
// MEX nikalna hai 

void solve(){
    int n;
    cin >> n ;
    vector<int> ans;
    unordered_map<int , int> mp;
    int maxi = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        mp[x]++;
        maxi = max(maxi , x);
    }
    for(int i = 0; i <= maxi+1 ; i++){
        if(mp.find(i) == mp.end()){
            cout << i << endl;
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