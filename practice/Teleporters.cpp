#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long n, c;
    cin >> n >> c;
    vector<long long> cost;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        cost.push_back(x + (i + 1));
    }

    sort(cost.begin(), cost.end());

    long long total = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (total + cost[i] <= c)
        {
            total += cost[i];
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << endl;
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
