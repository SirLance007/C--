// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Agar sum % 3 == 0
// eska mtlb apan check karege kya apan prefix array mai vo bana paa rahe hai and suffix array mai bhi
// next apan check karege agar sum % 3 != 0
// eska mtlb apane ko alag , alag chaiye sare
// 1 chaiye 0 chaiye aur 2 chaiye
// toh phir abb apan ek total vairable rakhege phele prefix mai check karege ki kya scene hai aur ohir suffux mai agar prefix%3 != suffix%3 != total - prefix[i]-suffix[i]%3 then apan return kar dege

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
        cin >> ans[i];

    vector<int> prefix(n);
    prefix[0] = ans[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + ans[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n ; j++)
        {
            int s1 = (prefix[i])%3;
            int s2 = (prefix[j] - prefix[i])%3;
            int s3 = (prefix[n - 1] - prefix[j])%3;

            if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3))
            {
                cout << i+1 << " " << j+1 << endl;
                return;
            }
        }
    }
    cout << "0 0\n";
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}