#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string lever;
    cin >> lever;
    int pivot = lever.find('^');
    long long leftTorque = 0, rightTorque = 0;

    for (int i = 0; i < pivot; i++)
    {
        if (isdigit(lever[i]))
        {
            leftTorque += (lever[i] - '0') * (pivot - i);
        }
    }
    for (int i = pivot + 1; i < lever.size(); i++)
    {
        if (isdigit(lever[i]))
        {
            rightTorque += (lever[i] - '0') * (i - pivot);
        }
    }

    if (leftTorque == rightTorque)
    {
        cout << "balance" << endl;
    }
    else if (leftTorque > rightTorque)
    {
        cout << "left" << endl;
    }
    else
    {
        cout << "right" << endl;
    }
}

int main()
{
    solve();
    return 0;
}
