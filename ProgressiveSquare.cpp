#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    long long n, c, d;
    cin >> n >> c >> d;
    unordered_map<long long, int> mp;
    vector<long long> ans;

    for (int i = 0; i < n * n; i++)
    {
        long long x;
        cin >> x;
        ans.push_back(x);
    }

    long long first = *min_element(ans.begin(), ans.end());

    for (int i = 0; i < n; i++)
    {
        long long row_start = first + c * i;
        for (int j = 0; j < n; j++)
        {
            long long val = row_start + d * j;
            mp[val]++;
        }
    }

    for (auto &num : ans)
    {
        if (mp.find(num) == mp.end())
        {
            cout << "NO\n";
            return;
        }
        mp[num]--;
        if (mp[num] == 0)
        {
            mp.erase(num);
        }
    }

    cout << "YES\n";
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
