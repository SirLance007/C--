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

// Observations
// 

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    for(int i = 1 ; i < n ; i++){
        if(abs(ans[i] - ans[i-1]) <= 1){
            cout << 0 << endl;
            return;
        }
    }
    for(int i = 1 ; i < n-1 ; i++){
        if((ans[i] > ans[i-1] && ans[i] > ans[i+1]) || (ans[i] < ans[i-1] && ans[i] < ans[i+1])){
            cout << 1 << endl;
            return;
        }
    }
    int mini = 10001;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(abs(ans[i] - ans[j]) <= 1 ){
                mini = min(mini , j-i+1-2);
            }
        }
    }
    if(mini == 10001){
        cout << -1 << endl;
        return;
    }
    cout << mini << endl;
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