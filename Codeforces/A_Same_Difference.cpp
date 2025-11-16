#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    char same = st[n - 1];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == first)
        {
            count++;
        }
    }
    cout << n - count << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}