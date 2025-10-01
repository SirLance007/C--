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

// Same diffrence
// array of n integers
// aj - ai = j - i
// aj - j = ai - i
// its kind of bj = ai
// agar apan sort karde 
// toh for 1 -> jo bhi values unke index se match ho rhi its correct
// for x -> values ( x > && n < ) toh we will make a suffix array which will tell the values which are at right place from last and also jis index pe apan abhi hai vo bhi match karna chaiye index se 

// So the approach is 
// jis bhi index pe ho uske aage check karo ki jo bhi element hai aur uske index ke beech ka jo diffrence hai vo ai-i se match ho 
// so just create a map of 


// Test cases 
// 1 3 4 5 6 6 
// suffix array -> [1 , 0 , 0 , 0 , 0 , 0]
// 1 2 3
// suffix array -> [2 , 1 , 0]
// 1 3 3 4
// suffix array -> [2 , 0 , 1 , 0]
// 1 3 4 5 6 6 
// suffix array -> [1 , 0 , 0 , 0 , 0 , ]
void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    unordered_map<int , int> mp;
    int total = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    for(int i = 0 ; i < n ; i++){
        int diff = ans[i] - (i+1);
        mp[diff]++;
    }
    for(int i = 0 ; i < n ; i++){
        int diff = ans[i] - (i+1);
        if(mp.find(diff) == mp.end()){
            continue;
        }
        total += mp[diff]-1;
        mp[diff]--;
        if(mp[diff] == 0){
            mp.erase(diff);
        }
    }
    cout << total << endl;
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