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
    string st;
    cin >> st;

    unordered_map<char , int> mp;
    for(int i = 0; i < n ; i++){
        mp[st[i]]++;
    }

    priority_queue<pair<int , char>> freq;
    for(auto it : mp){
        freq.push({it.second , it.first});
    }

    string ans = "";

    while(!freq.empty()){
        vector<pair<int , char>> temp;
        int sz = freq.size(); 
        for(int count = 0; count < sz; count++){
            pair<int , char> pq = freq.top();
            freq.pop();
            int fre = pq.first;
            char ch = pq.second;
            ans += ch;
            fre--;
            if(fre > 0){   
                temp.push_back({fre , ch});
            }
        }
        for(auto it : temp){
            freq.push(it);
        }
    }
    cout << ans << "\n";
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
