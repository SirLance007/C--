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
    vector<vector<char>> grid(n, vector<char>(m, '%'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            grid[i][j] = x;
        }
    }
    // first we will bfs over floors that are not surrounded by the walls
    queue<pair<int, int>> q;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int delRow[] = {-1, 0, 1, 0};
    int delCol[] = {0, -1, 0, 1};
    int count = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(grid[i][j] == '.' && vis[i][j] != 1){
                q.push({i , j});
                vis[i][j] = 1;
                count++;
                while (!q.empty())
                {
                    int row = q.front().first;
                    int col = q.front().second;
                    q.pop();
                    for (int k = 0; k < 4; k++)
                    {
                        int newRow = row + delRow[k];
                        int newCol = col + delCol[k];
                        if (newRow >= 0 && newCol >= 0 && newRow < n && newCol < m && vis[newRow][newCol] != 1 && grid[newRow][newCol] == '.')
                        {
                            q.push({newRow , newCol});
                            vis[newRow][newCol] = 1;
                        }
                    }
                }
            }
        }
    }
    cout << count << endl;
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