#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <limits>
#include <numeric>
#include <iterator>
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
    int left = 1;
    int right = n - 1;
    string st = "L";
    int prev = ans[0];
    while (left <= right)
    {
        if (left == right)
        {
            st += "L";
            left++;
        }
        // left and right dono bade hai
        else if (prev < ans[left] && prev < ans[right])
        {
            if (ans[left] < ans[right])
            {
                st += "RL";
                prev = ans[left];
            }
            else
            {
                st += "LR";
                prev = ans[right];
            }
        }
        // left right dono chote hai
        else if (prev > ans[left] && prev > ans[right])
        {
            if (ans[left] < ans[right])
            {
                st += "LR";
                prev = ans[right];
            }
            else
            {
                st += "RL";
                prev = ans[left];
            }
        }
        // ek bada hai ek chota hai
        else
        {
            st += "LR";
            prev = ans[right];
        }
        right--;
        left++;
    }
    cout << st << endl;
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