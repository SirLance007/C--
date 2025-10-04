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

// Agar 2nd type ke baad first ata hai then there is a problem
//
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    int isGlobalSet = 0;
    int setAllVal = 0;
    unordered_map<int, int> overrides; 

    for (int i = 0; i < m; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int idx, val;
            cin >> idx >> val;
            idx--; // 1-based to 0-based

            if (isGlobalSet)
            {
                int prevVal;
                if (overrides.count(idx))
                    prevVal = overrides[idx];
                else
                    prevVal = setAllVal;

                total += (val - prevVal);
                overrides[idx] = val;
            }
            else
            {
                total += (val - arr[idx]);
                arr[idx] = val;
            }

            cout << total << endl;
        }
        else
        { // type == 2
            int val;
            cin >> val;
            isGlobalSet = 1;
            setAllVal = val;
            total = n * val;
            overrides.clear(); // reset overrides since new global assignment
            cout << total << "\n";
        }
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