#include<iostream>
using namespace std;

void solve(){
    // dfs -> stack
}

int main(){
    int n , m;
    cin >> n >> m;
    vector<vector<int>> graph( n , vector<int> (m , 0));
    for(int i = 0; i < n ; i++){
        int x , y;
        cin >> x >> y;
        graph.push_back({x , y});
    }
    vector<vector<int>> adj;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            int u = graph[i][j];
            int v = graph[i][j];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    stack<int> st;
    while(!st.empty()){
        // int val = st.pop();
        
    }
}