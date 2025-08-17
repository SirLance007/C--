#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    int c, a, b;
    cin >> c >> a >> b;
    int price2 = a * 2;
    int discount = c / 2;
    int rem = c % 2;
    int total1 = discount * b;
    int total2 = discount * price2;
    cout << min(total1, total2) + rem * a << endl;
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