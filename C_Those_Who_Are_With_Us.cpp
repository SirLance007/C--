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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observation
// rows -> n
// columns -> m
// apan ek baar operation kar sakte hai
// take any r and c
// abb jha par bhi i == r ke barabar hai aur j == c ke barabar hai wha par -1 kar do
// us pure matrix mai sabse choti sabse maximum value of the matrix nikalni hai
// sari rows mai maximum ek row se jada ana chaiye
// sare columns mai maximum rk column se jada ana chaiye
// agar dono mai se ek bhi ho gayai toh done
// nhi toh dan dana dan -> second maximum return kar dege
// Diagonally har element ke liye upar neeche left right har jagah check karo agar maxi ek jada mai aa gaya hai toh -> ok

// Approach - 1
// Phele maximum element nikal lo row mai se
// phir unka total nikal lo
// phir apne ko maixmum har row mai vo kitne aa rahe hai aur har column mai vo kitne aa rahe hai vo check karna hai
// Dikkat kya hai agar ek se jada row ya column mai same maximum aaa rha hai toh konsi le
// co

// Agar column mai maxi ek se 2 baar aa rha hai
// Agar row mai maxi ek se 2 baar aa rha hai

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mp;
    vector<vector<int>> ans(n, vector<int>(m, 0));
    vector<int> op;
    // Taking input and storing all things in vector
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ans[i][j];
            op.push_back(ans[i][j]);
        }
    }
    sort(op.begin(), op.end());
    int len = op.size();
    int maxi = op[len - 1];
    int total = 0;
    // total maxi count
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ans[i][j] == maxi)
            {
                total++;
            }
        }
    }
    vector<int> row (n);
    vector<int> col (m);
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(ans[i][j] == maxi){
                row[i]++;
                col[j]++;
            }
        }
    }
    int flag = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(row[i] + col[j] - (ans[i][j] == maxi) == total){
                flag = 1;
                break;
            }
        }
    }
    cout << maxi - flag << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}