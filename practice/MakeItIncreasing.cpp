#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll minCount = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        while (arr[i] >= arr[i + 1] && arr[i] > 0)
        {
            arr[i] /= 2;
            minCount++;
        }

        if (arr[i] == arr[i + 1])
        {
            cout << -1 << nline;
            return;
        }
    }

    cout << minCount << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}