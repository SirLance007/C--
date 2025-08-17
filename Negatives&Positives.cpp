#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> ans(n), negatives;
    long long sum = 0;
    int neg = 0;
    long long mini = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        sum += abs(ans[i]);
        mini = min(mini, abs(ans[i]));
        if (ans[i] < 0)
        {
            neg++;
        }
    }

    if (neg % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - 2 * mini << endl;
    }
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
    return 0;
}
