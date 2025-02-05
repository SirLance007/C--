#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    unordered_map<int, int> mp;
    unordered_set<int> set1;
    unordered_set<int> set2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            set1.insert(i.first);
        }
        else
        {
            set2.insert(i.first);
        }
    }
    int ans = 0;
    if (set1.size() == 1)
    {
        ans += 2;
    }
    else
    {
        ans += round(set1.size() / 2.0) * 2;
    }
    if (set2.size() == 1)
    {
        ans += 1;
    }
    else
    {
        ans += set2.size();
    }
    cout << ans << endl;
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