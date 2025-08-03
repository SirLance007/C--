#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    long long sum = 0;
    vector<int> prefix(n), suffix(n);
    prefix[0] = ans[0];
    suffix[n - 1] = ans[n - 1];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = max(prefix[i - 1], ans[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = min(suffix[i + 1], ans[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (prefix[i] > suffix[i])
        {
            cout << sum + prefix[i] << " ";
        }
        else
        {
            cout << sum + ans[i] << " ";
        }
        sum += ans[i];
    }
    cout << endl;
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
