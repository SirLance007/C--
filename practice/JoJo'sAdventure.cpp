#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve()
{
    string st;
    cin >> st;
    int n = st.size();
    int count = 0, maxi = 0, one = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == '1')
        {
            count++;
        }
        else
        {
            maxi = max(maxi, count);
            count = 0;
        }
    }
    maxi = max(maxi, count);
    if (maxi == 0)
    {
        cout << maxi << endl;
        return;
    }
    if (maxi == n)
    {
        if (n == 1)
        {
            cout << 1 << endl;
            return;
        }
        long long final = n * n;
        cout << final << endl;
        return;
    }
    int index = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st[i] == '1')
        {
            one++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
        {
            one++;
        }
        else
        {
            break;
        }
    }
    int m = (max(maxi, one) - 1) / 2;
    long long ans = (max(maxi, one) - m) * (m + 1);
    if (ans < 0)
    {
        cout << 0 << endl;
        return;
    }
    if (ans == 0)
    {
        cout << 1 << endl;
        return;
    }
    cout << ans << endl;
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