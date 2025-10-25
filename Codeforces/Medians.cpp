#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1 && k == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if ((n + 1) / 2 != k)
    {
        cout << -1 << endl;
    }
    else
    {
        if (n == 3)
        {
            cout << 3 << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << n / 3 << endl;
            for (int i = 1; i < n; i += 3)
            {
                cout << i << " ";
            }
            cout << endl;
        }
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