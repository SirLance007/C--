#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
        sum += abs(x);
    }
    cout << sum << endl;
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