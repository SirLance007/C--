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

void solve()
{
    int a, b;
    cin >> a >> b;

    if( b % 2 == 1 ){
        if( a % 2 == 1){
            cout << a*b+1 << endl;
            return;
        }
        else{
            cout << -1 << endl;
            return;
        }
    }

    int x = b;
    int op = 0;
    while(x % 2 == 0){
        x = x/2;
        op++;
    }
    if(a%2 == 1 && op == 1){
        cout << -1 << endl;
        return;
    }
    int mini = (a%2 == 1 ? 2 : 1);
    int s1 = a*mini + b/mini;
    int result = a*(b/2)*2;
    cout << max(s1 , result) << endl;
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