#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    int one = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            one++;
        }
        ans.push_back(x);
    }
    int zeroes = 2 * n - one;
    int mini = min(one, zeroes);
    if (one % 2 == 0 && (2 * n - one) % 2 == 0)
    {
        cout << 0 << " " << mini << endl;
    }
    else
    {
        cout << 1 << " " << mini << endl;
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
