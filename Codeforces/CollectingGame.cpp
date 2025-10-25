/*
    author    : MishkatIT
    created   : Tuesday 2023-12-12-21.49.41
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        vector<ll> pref(n + 5);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + v[i].first;
        }
        vector<int> ans(n + 5);
        ans[v[n].second] = n - 1;
        for (int i = n - 1; i > 0; i--)
        {
            if (pref[i] >= v[i + 1].first)
            {
                ans[v[i].second] = ans[v[i + 1].second];
            }
            else
            {
                ans[v[i].second] = i - 1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " \n"[i == n];
        }
    }
    return 0;
}
