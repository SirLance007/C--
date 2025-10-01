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

// Observations
// n -> products
// buy -> single -> ai
// discount -> group
// k -> discount voucers hai
// voucher -> value -> x -> eska mtlb aap x products utha sakte hai -> pay x-1 expensive ones
// har product only one discount voucher mai aa sakta hai
// voucher bhi ek baa hi use kar sakte hai
// minimum cost batani hai

// Approach
// sort the array
// jisse ye pata chal jayega maximum konsa hai uske baad apne ko choose karna hai sabse kam products konse voucher mai aa sakte hai phir apan unke group bana dege last se sabse kam products contain akrne walo ke
// ok so sort the price array in decending and voucher one in ascending
// uske baad tak the first element from voucher one and from the last n-voucher[i] -> add it
// last mai total - free ones

// Test case
// 18 9 7 3 2
// 1 1 3
// discount += 18 + 9 + 2
// price -> 39 - 29 -> 10

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> price;
    vector<int> voucher;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        price.push_back(x);
        total += x;
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        voucher.push_back(x);
    }
    unordered_map<int, int> mp;
    sort(price.begin(), price.end(), greater<>());
    sort(voucher.begin(), voucher.end());
    int discount = 0;
    int pos = 0;
    for (int i = 0; i < k; i++)
    {
        int x = voucher[i];
        pos += x - 1;
        // agar pos hi bahar chala gaya toh hatao bc esko 
        if(pos >= n){
            break;
        }
        discount += price[pos];
        pos++;
    }

    cout << total - discount << endl;
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
