#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    int one = 0;
    int zero = 0;
    int two = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
        sum += x;
        if (x == 1)
        {
            one++;
        }
        else if (x == 2)
        {
            two++;
        }
        else
        {
            zero++;
        }
    }

    if (k < sum || (k - sum == 1))
    {
        while (zero > 0)
        {
            cout << "0" << " ";
            zero--;
        }
        while (two > 0)
        {
            cout << "2" << " ";
            two--;
        }
        while (one > 0)
        {
            cout << "1" << " ";
            one--;
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
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