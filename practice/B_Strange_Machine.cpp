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

// Observation
// n machines arranged in a circle
// each machine is either type A or B
// A -> decreases 'a' by 1 each second
// B -> divides 'a' by 2 (integer division)
// You start from machine 1, apply operation, and move to next in circle.
// Find total time to make 'a' = 0.

void solve()
{
    int n, q;
    cin >> n >> q;
    string st;
    cin >> st;
    bool isB = false;
    for(int i = 0; i < n ; i++){
        if(st[i] == 'B'){
            isB = true;
            break;
        }
    }

    while (q--)
    {
        int a;
        cin >> a;
        if (isB == false)
        {
            cout << a << endl;
        }
        else
        {
            int idx = 0;
            int steps = 0;

            while (a > 0)
            {
                if (st[idx] == 'B')
                {
                    a /= 2;
                    steps++;
                }
                else
                { // agar a milta hai toh jab tak a hai carry on
                    int len = 0;
                    int cur = idx;
                    // count consecutive 'A's in circular fashion
                    while (st[cur] == 'A')
                    {
                        len++;
                        cur = (cur + 1) % n;
                        // cyclic break
                        if (cur == idx)
                        {
                            break;
                        }
                    }

                    if (a > len)
                    {
                        a -= len;
                        steps += len;
                        idx = cur;
                        continue;
                    }
                    else
                    {
                        steps += a;
                        break;
                    }
                }
                idx = (idx + 1) % n;
            }
            cout << steps << endl;
        }
    }
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
