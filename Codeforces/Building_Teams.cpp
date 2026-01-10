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
    int n , m;
    cin >> n >> m;
    unordered_map<int , vector<int>> mp;
    for(int i = 0; i < m ; i++){
        int x , y;
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    vector<int> vis(n+1 , 0);
    vector<int> components;
    unordered_map<int , int> teams;
    bool possible = true;  
    
    for(int i = 0; i < n ; i++){
        if(vis[i+1] != 1){
            queue<int> q;
            q.push(i+1);
            vis[i+1] = 1;
            components.push_back(i+1);
            teams[i+1] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                vis[node] = 1;
                for(auto it : mp[node]){
                    if(vis[it] != 1){
                        q.push(it);
                        vis[it] = 1;
                        teams[it] = 3 - teams[node];  
                    }
                    else if(teams[it] == teams[node]){  
                        possible = false;
                    }
                }
            }
        }
    }
    
    if(!possible){ 
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    
    for(int i = 0; i < n ; i++){
        cout << teams[i+1] << " ";
    }
    cout << endl;
}

int32_t main(){
    fast;
    solve();
    return 0;
}