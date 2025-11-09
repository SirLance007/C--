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
// X -> loyalty factor
// loyalty level -> S/X
// S -> total cost of items purchased
// if buy an item with price p
// loyalty inc by -> p points
// 

// int n;
//         long long X;
//         cin >> n >> X;
//         vector<long long> a(n);
//         long long total = 0;
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             total += a[i];
//         }
//         long long L = total / X;
//         sort(a.begin(), a.end());
//         long long bonus = 0;
//         for (int i = n - L; i < n; ++i) {
//             bonus += a[i];
//         }
//         cout << bonus << '\n';
//         vector<long long> order;
//         long long S = 0;
//         int left = 0, right = n - 1;
//         for (int i = 0; i < n; ++i) {
//             long long rem = S % X;
//             long long d = (rem == 0 ? X : X - rem);
//             if (left <= right && a[left] < d) {
//                 order.push_back(a[left]);
//                 S += a[left];
//                 ++left;
//             } else {
//                 order.push_back(a[right]);
//                 S += a[right];
//                 --right;
//             }
//         }
        
//         for (int i = 0; i < n; ++i) {
//             cout << order[i];
//             if (i + 1 < n) cout << " ";
//             else cout << '\n';
//         }

void solve()
{
    int n , x;
    cin >> n >> x;
    vector<int> ans;
    int total = 0;
    for(int i = 0; i < n ; i++){
        int y;
        cin >> y;
        ans.push_back(y);
        total += ans[i];
    }
    int l = total / x;
    sort(ans.begin() , ans.end());
    int bonus = 0;
    for(int i = n-l; i < n ; i++){
        bonus += ans[i];
    }
    cout << bonus << endl;
    vector<int> order;
    int sum = 0;
    int left = 0 , right = n-1;
    for(int i = 0; i < n ; i++){
        int rem = sum % x;
        int d;
        
    } 
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