#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int maxi = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[st[i]]++;
        maxi = max(maxi, mp[st[i]]);
    }
    if (maxi > n / 2)
    {
        int dist = mp.size() - 1;
        cout << maxi - dist << endl;
    }
    else
    {
        cout << "0" << endl;
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
