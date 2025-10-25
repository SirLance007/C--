#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
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
    stack<int> st1;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (st1.empty())
        {
            st1.push(ans[i]);
        }
        else if (st1.top() < ans[i])
        {
            st1.push(ans[i]);
        }
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