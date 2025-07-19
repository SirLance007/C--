#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 1;
    long long sum = 1;
    while (sum < n)
    {
        sum = sum * 2 + 2;
        count++;
    }
    cout << count << endl;
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