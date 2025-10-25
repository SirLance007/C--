#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n;
    char ch;
    cin >> n >> ch;
    string st;
    cin >> st;
    int num = 2;

    bool all_good = true;
    for (char c : st)
    {
        if (c != ch)
        {
            all_good = false;
            break;
        }
    }
    if (all_good)
    {
        cout << 0 << "\n";
        return;
    }

    while (num <= n)
    {
        bool flag = true;
        for (int j = num; j <= n; j += num)
        {
            if (st[j - 1] != ch)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << 1 << "\n"
                 << num << "\n";
            return;
        }
        num++;
    }

    cout << 2 << "\n"
         << n << " " << n - 1 << "\n";
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
