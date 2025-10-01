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
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observations
// array of len -> n
// even integer -> k
// k sub arrays mai split karna hai
// even indices subarrays ko ek subarray mai daal diay aur us array ka naam de diya b aur phir 0 add kar diya
// abb bi mai sare

// Minimum cost nikalni hai
// Eska mtlb chote se chota index chaiye apne ko jo b wale arrya mai glt aye

// Approach
// extra kitne bache hai vo nikalte hai
// etno ko apne ko adjust karna padega
// jada aa rahe hai toh bus ek aisa sub array lo
// 2 subarray mai hi sare bache hue elements daal do
// agar 2 array mai index nhi milta hai toh
// ya toh 2 element hoga ya toh 3
// phele dekho ki 2 kha sub array mai nhi mil rha hai
// 1 1 2 3
// 1 3
// 1 2 ya last
// 1 1 2 2 2 -> 
// 1 1 2 3 4 -> 
// 1 1 2 2 3


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    if (n == k)
    {
        int val = 2;
        for (int i = 0; i < n; i++)
        {
            if((i+1)%2 == 0){
                if(ans[i] != val/2){
                    cout << (i+1)/2 << endl;
                    return;
                }
                val += 2;
            }
        }
        cout << n/2+1 << endl;
    }
    else {
        int extra = n%k ;
        int div = n/k;
        // first check for index 1
        for(int i = 0; i < div+extra+1  ; i++){
            if(ans[i] != 1){
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
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

