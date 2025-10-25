#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<long long, int>> arr[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            long long x;
            cin >> x;
            arr[i].push_back({x, j});
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sort(arr[i].rbegin(), arr[i].rend());
    }

    long long maxSum = 0;

    for (int i = 0; i < min(n, 100); i++)
    {
        for (int j = 0; j < min(n, 100); j++)
        {
            for (int k = 0; k < min(n, 100); k++)
            {
                int idx1 = arr[0][i].second;
                int idx2 = arr[1][j].second;
                int idx3 = arr[2][k].second;

                if (idx1 != idx2 && idx2 != idx3 && idx1 != idx3)
                {
                    long long sum = arr[0][i].first + arr[1][j].first + arr[2][k].first;
                    maxSum = max(maxSum, sum);
                }
            }
        }
    }

    cout << maxSum << endl;
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
