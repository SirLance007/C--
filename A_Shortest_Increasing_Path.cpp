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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Observation


void solve(){
    int n ;
    cin >> n;
    vector<int> ans;
    unordered_map<int , int> mp;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
        mp[num]++;
    }
    int mini = INT_MAX;
    for(auto it : mp){
        mini = min(mini , it.second);
    }
    cout << mini << endl;

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