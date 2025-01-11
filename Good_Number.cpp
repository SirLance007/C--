#include <bits/stdc++.h>
using namespace std;

bool solve(string st, int k)
{
    int i = 0;
    while (i < st.length())
    {
        if (st[i] - '0' > k)
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    int n , k;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        if (solve(num, k))
        {
            count++;
        }
    }
    cout << count << endl;
}