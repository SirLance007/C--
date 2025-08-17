#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve()
{
    string st;
    cin >> st;
    char first = st[0];
    char nums = st[1];

    char s = 'a';
    for (int i = 1; i <= 8; i++)
    {
        if (s != first)
            cout << string(1, s) + to_string(nums - '0') << endl;
        s++;
    }

    for (int i = 1; i <= 8; i++)
    {
        if (i != nums - '0')
            cout << string(1, first) + to_string(i) << endl;
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
