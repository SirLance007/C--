#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> ans;
    vector<long long> t;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ans.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        long long y;
        cin >> y;
        t.push_back(y);
    }
    sort(ans.begin(), ans.end());
    sort(t.begin(), t.end());
    if (ans == t)
    {
        cout << "Yes" << endl;
        return;
    }
    unordered_map<long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        long long num = ans[i] % k;
        if (num < 0)
            num += k;
        long long num2 = min(num, k - num);
        mp[num2]++;
    }
    for (int j = 0; j < n; j++)
    {
        long long num = t[j] % k;
        if (num < 0)
            num += k;
        long long num2 = min(num, k - num);
        mp[num2]--;
    }
    int flag = 1;
    for (auto pair : mp)
    {
        if (pair.second != 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
