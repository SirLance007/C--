#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> ans;
    ans.push_back(-1e9);
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (!ans.empty() && ans.back() == x)
            continue;
        ans.push_back(x);
    }
    ans.push_back(-1e9);
    int count = 0;
    for (int i = 1; i < ans.size() - 1; i++)
    {
        if (ans[i] > ans[i - 1] && ans[i] > ans[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
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
