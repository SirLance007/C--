#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    string ans = ""; 
    for (long long i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            ans += to_string(i);
        }
    }
    for (long long i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ans += to_string(i);
        }
    }
    cout << ans[k - 1] << endl;
}