#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
        if (mp.find(x) == mp.end())
        {
            mp[ans[i]] = i + 1;
        }
    }
    vector<int> queries;
    for (int i = 0; i < k; i++)
    {
        int y;
        cin >> y;
        queries.push_back(y);
    }
    for (int i = 0; i < k; i++)
    {
        int index = mp[queries[i]];
        cout << mp[queries[i]] << " ";
        for (auto &it : mp)
        {
            if (it.second < index)
            {
                it.second++;
            }
        }
        mp[queries[i]] = 1;
    }
}

int main()
{
    solve();
}