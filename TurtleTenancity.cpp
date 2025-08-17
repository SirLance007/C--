#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> ans;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ans.push_back(x);
        if (x == 1)
        {
            one++;
        }
    }
    sort(ans.begin(), ans.end());
    if (ans[0] != ans[1])
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (ans[i] % ans[0] != 0)
            {
                flag = 1;
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