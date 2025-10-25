#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int total = (a + b + c);
    if (total % 3 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    int avg = total / 3;
    int card1 = avg - a;
    int card2 = avg - b;
    if (card1 < 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (card2 < 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (card1 + card2 == c - avg)
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