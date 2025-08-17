#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    vector<long long> suffix(n, 0);

    for (int i = 0; i < n; i++)
    {
        long long count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (ans[i] < ans[j])
            {
                count++;
            }
        }
        suffix[i] = count;
    }

    long long mini = LLONG_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            mini = min(mini, suffix[i]);
        }
        else
        {
            mini = min(mini, suffix[i] + i);
        }
    }
    if (suffix[0] == 0)
    {
        cout << 0 << endl;
        return;
    }
    // if (mini = LLONG_MAX)
    // {
    //     cout << 0 << endl;
    //     return;
    // }

    cout << mini << "\n";
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
