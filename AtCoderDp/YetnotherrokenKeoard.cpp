#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve()
{
    string st;
    cin >> st;
    string str = "";
    int cap = 0;
    int small = 0;
    for (int i = st.size() - 1; i >= 0; i--)
    {
        if (st[i] == 'b')
        {
            small++;
        }
        else if (st[i] == 'B')
        {
            cap++;
        }
        else if (st[i] >= 'a' && st[i] <= 'z' && small >= 1)
        {
            small--;
        }
        else if (st[i] >= 'A' && st[i] <= 'Z' && cap >= 1)
        {
            cap--;
        }
        else
        {
            str += st[i];
        }
    }
    if (str.size() >= 1)
    {
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    else
    {
        cout << "" << endl;
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