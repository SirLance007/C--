#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    unordered_set<int> st;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != -1)
        {
            st.insert(x);
        }
        if (x == 0)
        {
            zero++;
        }
    }
    if (zero >= 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (st.size() > 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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