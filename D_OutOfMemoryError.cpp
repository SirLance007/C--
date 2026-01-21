// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;
    
    vector<int> a(n + 1);
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    unordered_map<int, int> mp;
    
    for (int i = 0; i < m; i++) {
        int b, c;
        cin >> b >> c;
        
        mp[b] += c;
        
        if (a[b] + mp[b] > h) {
            mp.clear();
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << a[i] + mp[i];
        if (i < n) cout << " ";
    }
    cout << "\n";
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}