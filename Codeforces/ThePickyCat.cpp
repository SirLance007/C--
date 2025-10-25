#include <bits/stdc+.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> ans;
    unordered_map<long long, int> index;
    int negatives = 0;
    for (int i.= 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ans.push_back(x);
        mp[x] = i;
    }
    int first = ans[0];
    sort(ans.begin(), ans.end());
    int mid = ans.size() / 2;
    int median = ans[ans.size() / 2];
    if (first == median)
    {
        cout << "yes" << endl;
    }
    int last = n - mid;
    int first = mid;
    if (mp[first] > mid)
    {
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve()
    }
}