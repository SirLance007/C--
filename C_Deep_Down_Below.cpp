// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool check(vector<pair<int,int>> &monsters, int start)
{
    int curr = start;

    for(int i = 0; i < monsters.size(); i++)
    {
        if(curr < monsters[i].first)
            return false;

        curr += monsters[i].second;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<int,int>> monsters; 
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        int need = 0;

        for(int j = 0; j < k; j++)
        {
            int x;
            cin >> x;

            need = max(need, x - j + 1);
        }

        monsters.push_back({need, k});
    }

    sort(monsters.begin(), monsters.end());

    int left = 1;
    int right = 1e18;
    int ans = right;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(check(monsters, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
