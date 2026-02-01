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

bool adjacent(int r1, int c1, int r2, int c2)
{
    return abs(r1 - r2) <= 1 && abs(c1 - c2) <= 1 && !(r1 == r2 && c1 == c2);
}

void solve()
{
    vector<string> grid(3);
    for (int i = 0; i < 3; i++)
        cin >> grid[i];

    vector<string> V;

    for (int r1 = 0; r1 < 3; r1++)
    for (int c1 = 0; c1 < 3; c1++)
    for (int r2 = 0; r2 < 3; r2++)
    for (int c2 = 0; c2 < 3; c2++)
    for (int r3 = 0; r3 < 3; r3++)
    for (int c3 = 0; c3 < 3; c3++)
    {
        
        if (r1 == r2 && c1 == c2) continue;
        if (r2 == r3 && c2 == c3) continue;
        if (r1 == r3 && c1 == c3) continue;

        if (!adjacent(r1, c1, r2, c2)) continue;
        if (!adjacent(r2, c2, r3, c3)) continue;

        string word = "";
        word += grid[r1][c1];
        word += grid[r2][c2];
        word += grid[r3][c3];

        V.push_back(word);
    }

    cout << *min_element(V.begin(), V.end()) << endl;
}

int32_t main()
{
    fast;
    solve();
    return 0;
}
