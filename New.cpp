#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        b.push_back(y);
    }

    int total = 0;

    while (true)
    {
        int flag = 1;
        int one = 1;
        int two = 1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                flag = 0;
                break;
            }
        }

        total++;

        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i] && one)
                {
                    a[i]--;
                    one = 0;
                }
                else if (a[i] < b[i] && two)
                {
                    a[i]++;
                    two = 0;
                }
                if (one == 0 && two == 0)
                    break;
            }
        }
        else
            break;
    }

    cout << total << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
