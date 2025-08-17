#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long a, b, l;
    cin >> a >> b >> l;
    if (l % a != 0 && l % b != 0)
    {
        cout << 1 << endl;
        return;
    }
    // dono divide karte hai

    // dono mai se ek divide karta hai
    if (l % a != 0 && l % b == 0 || l % a == 0 && l % b != 0)
    {
        if (l % a == 0)
        {
            cout << l / a << endl;
            return;
        }
        else
        {
            cout << l / b << endl;
            return;
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