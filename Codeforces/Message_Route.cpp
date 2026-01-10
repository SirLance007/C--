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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    
    vector<int> vis(n + 1, 0);
    vector<int> parent(n + 1, -1);
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    bool found = false;
    
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        
        if(node == n){
            found = true;
            break;
        }
        
        for (auto it : mp[node])
        {
            if (vis[it] != 1)
            {
                q.push(it);
                vis[it] = 1;
                parent[it] = node;
            }
        }
    }
    
    if(!found){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    
    vector<int> path;
    int curr = n;
    while(curr != -1){
        path.push_back(curr);
        curr = parent[curr];
    }
    
    reverse(path.begin(), path.end());
    
    cout << path.size() << endl;
    for(auto it : path){
        cout << it << " ";
    }
    cout << endl;
}

int32_t main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
    return 0;
}