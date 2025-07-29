#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
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
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    int count = 1;
    long long coins = 0;
    int index = n - 1;
    if (ans[0] > c)
    {
        cout << ans.size() << endl;
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (ans[i] * count <= c)
        {
            coins++;
            count = count * 2;
        }
    }
    cout << n - coins << endl;
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
    return 0;
}