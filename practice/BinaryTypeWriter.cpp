#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int count_01 = 0;
    int count_10 = 0;
    int prev = '0';
    int count = 0;
    if (st[0] != '0')
    {
        count++;
        prev = '1';
    }
    for (int i = 1; i < n; i++)
    {
        if (st[i - 1] == '0' && st[i] == '1')
            count_01++;
        if (st[i - 1] == '1' && st[i] == '0')
            count_10++;
        if (st[i] != prev)
        {
            count++;
            prev = st[i];
        }
    }
    if (count_01 >= 2 || count_10 >= 2)
    {
        cout << n + count - 2 << endl;
    }
    else if (count_01 >= 1 || count_10 >= 1 || st[0] == '1')
    {
        cout << n + 1 << endl;
    }
    else
    {
        cout << n << endl;
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