#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if ((n + 1) / p == m / q)
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