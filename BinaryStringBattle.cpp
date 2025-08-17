#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string st;
    cin >> st;
    int maxi = 0;
    int count = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
        {
            one++;
        }
    }
    if (one <= k)
    {
        cout << "Alice" << endl;
        return;
    }
    if (k == 1 && one == 1)
    {
        cout << "Alice" << endl;
        return;
    }
    else if (k == 1 && one > 1)
    {
        cout << "Bob" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
        {
            count++;
        }
        else
        {
            maxi = max(count, maxi);
        }
    }
    if (maxi >= k)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}