// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Fenwick Tree (BIT)
struct Fenwick
{
    int n;
    vector<int> bit;
    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int idx, int v)
    {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += v;
    }

    int query(int idx)
    {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx)
            sum += bit[idx];
        return sum;
    }

    int find_kth(int k)
    { // find smallest idx such that prefix sum >= k
        int cur = 0, res = 0;
        for (int i = (1 << 18); i > 0; i >>= 1)
        {
            if (res + i <= n && cur + bit[res + i] < k)
            {
                res += i;
                cur += bit[res];
            }
        }
        return res + 1;
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m), c(m), vals;
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    for (int &x : c)
        cin >> x;

    for (int x : a)
        vals.push_back(x);
    for (int x : b)
        vals.push_back(x);
    for (int x : c)
        if (x > 0)
            vals.push_back(x);

    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());

    auto idx = [&](int x)
    {
        return lower_bound(vals.begin(), vals.end(), x) - vals.begin() + 1;
    };

    Fenwick ft(vals.size());

    // Insert warriors in BIT
    for (int x : a)
        ft.update(idx(x), 1);

    vector<pair<int, int>> upgrades;
    vector<int> consumers;

    for (int i = 0; i < m; i++)
    {
        if (c[i] > 0)
            upgrades.push_back({b[i], c[i]});
        else
            consumers.push_back(b[i]);
    }

    sort(upgrades.begin(), upgrades.end());
    sort(consumers.begin(), consumers.end());

    int killed = 0;

    auto take_monster = [&](int power)
    {
        int pos = lower_bound(vals.begin(), vals.end(), power) - vals.begin() + 1;
        int total = ft.query(vals.size());
        int before = ft.query(pos - 1);

        if (before == total)
            return (int)-1;

        int kth = before + 1;
        int id = ft.find_kth(kth);
        ft.update(id, -1);
        return vals[id - 1];
    };

    for (auto &[bb, cc] : upgrades)
    {
        int got = take_monster(bb);
        if (got != -1)
        {
            killed++;
            ft.update(idx(max(got, cc)), 1);
        }
    }

    for (int bb : consumers)
    {
        int got = take_monster(bb);
        if (got != -1)
            killed++;
    }

    cout << killed << "\n";
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
