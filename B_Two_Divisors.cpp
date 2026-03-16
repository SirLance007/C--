// Hare Krishna
// Code by Prankur Sharma

#include <iostream>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    if (b % a == 0)
    {
        cout << (b * b) / a << "\n";
    }
    else
    {
        cout << (a / gcd(a, b)) * b << "\n";
    }
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}
