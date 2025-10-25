#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string st;
    cin >> st;
    if (k == 1 || k == n)
    {
        cout << 1 << endl;
        return;
    }
    int first = 0, last = 0;
    int index1 = -1, index2 = -1;

    // Count '#' in first k characters
    for (int i = 0; i < k; i++)
    {
        if (st[i] == '#')
        {
            if (index1 == -1)
                index1 = i;
            break;
        }
    }
    for (int i = n - 1; i > k - 1; i--)
    {
        if (st[i] == '#')
        {
            index2 = i;
            break;
        }
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '#')
        {
            total++;
        }
    }
    if (total == 1)
    {
        if (index2 != -1)
        {
            cout << index2 - (k - 2) << endl;
        }
        else if (index1 != -1)
        {
            cout << 2 << endl;
        }
        return;
    }
    if (total == 0)
    {
        cout << 1 << endl;
        return;
    }
    cout << index2 - index1 - 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
