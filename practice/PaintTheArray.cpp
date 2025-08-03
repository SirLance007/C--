#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    long long gcd_even = 0, gcd_odd = 0;

    for (int i = 0; i < n; i += 2)
        gcd_even = (gcd_even == 0 ? arr[i] : gcd(gcd_even, arr[i]));

    for (int i = 1; i < n; i += 2)
        gcd_odd = (gcd_odd == 0 ? arr[i] : gcd(gcd_odd, arr[i]));

    bool valid_even = gcd_even != 0;
    bool valid_odd = gcd_odd != 0;

    if (valid_even)
    {
        for (int i = 1; i < n; i += 2)
        {
            if (arr[i] % gcd_even == 0)
            {
                valid_even = false;
                break;
            }
        }
    }

    if (valid_odd)
    {
        for (int i = 0; i < n; i += 2)
        {
            if (arr[i] % gcd_odd == 0)
            {
                valid_odd = false;
                break;
            }
        }
    }

    if (valid_even)
        cout << gcd_even << endl;
    else if (valid_odd)
        cout << gcd_odd << endl;
    else
        cout << 0 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
