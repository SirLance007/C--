#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }
    int maxi = *max_element(ans.begin(), ans.end());
    int mini = *min_element(ans.begin(), ans.end());
    cout << (n - 1) * (maxi - mini) << endl;
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