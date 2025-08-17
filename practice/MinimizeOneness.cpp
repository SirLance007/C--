#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n - 1; ++i)
    {
        s += '0';
    }
    s += '1';
    cout << s << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}