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
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Problem
// 1. we have given n -> we need to make n(n-1)/2 size of the array
// 2. simple hai unique elements lo unko
// 3. n(n-1)/2
// 4. sabse chota ayega n time
// use chota ayega n-1 times -> agar koi element jada hai toh n-1 times minus how many times it came
// aise hi chalta ajyega and last we will tak element greated than our maxi

void solve()
{
    int n;
    cin >> n;
    int size = n*(n-1)/2;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<int> res;
    res.push_back(arr[0]);
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
            res.push_back(arr[i]);
    }
    // Hello how are you 
    for (int x : res)
        cout << x << " ";
    cout << "\n";
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