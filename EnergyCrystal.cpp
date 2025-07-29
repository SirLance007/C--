#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <limits>
#include <numeric>
#include <cmath>
using namespace std;

void solve()
{
    long long x;
    cin >> x;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int count = 0;
    while (min({a1, a2, a3}) < x)
    {
        if (a1 <= a2 && a1 <= a3)
        {
            a1 = min(a2, a3) * 2 + 1;
        }
        else if (a2 <= a1 && a2 <= a3)
        {
            a2 = min(a1, a3) * 2 + 1;
        }
        else
        {
            a3 = min(a1, a2) * 2 + 1;
        }
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