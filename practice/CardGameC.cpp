#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;

    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'A')
            a.push_back(i + 1);
        else
            b.push_back(i + 1);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // alice kin cases mai har sakta hai
    // case-1 => jab b[n-1] > a[n-1]
    // subcase - 1 => a[0] == 1 ==> bob -> b.size() >= 2
    // case-2 => jab a[n-1] > b[n-1]
    // subcase => b[0] == 1 -> b ==> a[n-2] > b[n-1]

    if (n == 2)
    {
        cout << (st[0] == 'A' ? "Alice" : "Bob") << endl;
        return;
    }

    if (a.size() == 1 && b.size() > 1)
    {
        cout << "Bob" << endl;
        return;
    }
    if (b.size() == 1 && a.size() > 1)
    {
        cout << "Alice" << endl;
        return;
    }

    if (b.back() > a.back())
    {
        if (a[0] == 1)
        {
            if (b.size() >= 2)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
        else
        {
            cout << "Bob" << endl;
            return;
        }
    }
    else
    {
        if (b[0] == 1)
        {
            if (a[a.size() - 2] > b[b.size() - 1])
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
        else
        {
            cout << "Alice" << endl;
            return;
        }
    }
}

// 2 , 4 => a
// 1 , 3 => b

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
