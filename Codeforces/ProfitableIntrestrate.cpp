#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << a << endl;
        return;
    }
    long long sum = 0;
    int rem = a - b;
    int ans = rem / 2 + 1;
    if (ans < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
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