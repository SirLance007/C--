#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve2()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> ans;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ans.push_back(x);
    }
    long long left = (k + 1) / 2;
    long long right = k / 2;
    long long prefix = 0;
    long long total = 0;
    long long index = 0;
    for (int i = 0; i < n; i++)
    {
        index = i;
        prefix += ans[i];
        if (prefix > k)
        {
            ans[i] = prefix - k;
            break;
        }
        else
        {
            total++;
        }
    }
    long long suffix = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i > index)
        {
            cout << n << endl;
            return;
        }
        if (suffix > k)
        {
            cout << total << endl;
            return;
        }
        else
        {
            total++;
        }
    }
}

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> ans;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ans.push_back(x);
    }
    int left = 0;
    int right = n - 1;
    int flag = 0;
    long long total = 0;
    while (k > 0)
    {
        if (flag == 0)
        {
            ans[left]--;
            if (ans[left] == 0)
            {
                left++;
                total++;
            }
            flag = 1;
        }
        else
        {
            ans[right]--;
            if (ans[right] == 0)
            {
                right--;
                total++;
            }
            flag = 0;
        }
        if (left > right)
        {
            cout << n << endl;
            return;
        }
        k--;
    }
    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve2();
    }
}