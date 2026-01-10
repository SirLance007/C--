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
    unordered_map<int , vector<pair<int , int>>> adj;
    vector<int> dist(n+1 , LLONG_MAX);
    
    for(int i = 0; i < m ; i++){
        int x , y , time;
        cin >> x >> y >> time;
        adj[x].push_back({y , time});
    }
    
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> pq;
    dist[1] = 0;
    pq.push({0 , 1});
    
    while(!pq.empty()){
        int d = pq.top().first;
        int x = pq.top().second;
        pq.pop();
        for(auto it : adj[x]){
            int node = it.first;
            int weight = it.second;
            if(dist[x] + weight < dist[node]){
                dist[node] = dist[x] + weight;
                pq.push({dist[node] , node}); 
            }
        }
    }    
    
    for(int i = 1; i <= n; i++){
        if(dist[i] == LLONG_MAX){
            cout << -1 << " ";
        }
        else{
            cout << dist[i] << " ";
        }
    }
    cout << endl;
}

int32_t main(){
    fast;
    solve();
    return 0;
}