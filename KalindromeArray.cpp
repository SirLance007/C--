#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <unordered_set>
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
    unordered_set<int> st;
    int left = 0;
    int right = n - 1;
    int first = 0;
    int last = 0;
    while (left < right)
    {
        if (ans[left] != ans[right])
        {
            first = ans[left];
            last = ans[right];
            break;
        }
        left++;
        right--;
    }
    if (ans.size() == 3)
    {
        if (ans[0] != ans[2] && ans[0] != ans[1])
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != first)
        {
            one.push_back(ans[i]);
        }
    }
    for (int j = 0; j < n; j++)
    {
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