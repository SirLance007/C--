#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve()
{
    long long n, c;
    cin >> n >> c;
    vector<long long> ans;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        long long total = x + (i + 1);
        ans.push_back(total);
    }
    sort(ans.begin(), ans.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        c -= ans[i];
        if (c < 0)
        {
            cout << count << endl;
            return;
        }
        count++;
    }
    cout << n << endl;
    return;
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