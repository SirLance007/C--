#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cctype>
#include <cwctype>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cmath>
#include <complex>
#include <valarray>
#include <random>
#include <limits>
#include <utility>
using namespace std;
// Hare krishna

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ans[i][j];
        }
    }
    long long total = 0;
    for (int i = 0; i < n/2; i++)
    {
        // abb sabse upar wali row aur left wala column check karna hai
        int count_1 = 0;
        int count_2 = 0;
        // top row ke liye code
        for (int k = n - i - 1; k >= i; k--)
        {
            if (ans[i][k] == 1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }
        // left column ke liye code
        for (int k = i + 1; k < n - i; k++)
        {
            if (ans[k][i] == 1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }
        total += min(count_1, count_2);
        // uske baad sabse neche wali row aur right wala column check karna hai
        count_1 = 0;
        count_2 = 0;
        // right column ke liye code
        for (int k = n - i - 2; k > i; k--)
        {
            if (ans[k][n - i - 1] == 1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }
        // bottom most ke liye code
        for (int k = n - i + 1; k < n - i - 1; k++)
        {
            if (ans[n - i - 1][k] == 1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }
        total += min(count_1, count_2);
    }
    cout << total << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
