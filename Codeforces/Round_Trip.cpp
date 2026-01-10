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

void dfs(int node , int parent , unordered_map<int , vector<int>> mp , vector<bool> &vis , vector<int> &path ){
    // stack<int> 
    // int delRow [] = {-1 , 0 , 1 , 0};
    // int delCol [] = {0 , -1 , 0 , 1};
    // q.push(node);
    // while(!q.empty()){
    //     int val = q.front();
    //     q.pop();
    //     for(auto it : )
    // }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, vector<int>> mp;
    vector<int> indegree(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    
}

int32_t main()
{
    fast;
    // int t = 1;
    // cin >> t;
    // while(t--){
    solve();
    // }
    return 0;
}