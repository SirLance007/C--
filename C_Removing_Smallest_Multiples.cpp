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
// ek k choose karo
// multiple of exists in S
// then delete the smallest multiple of k from s
// T given hai jo subset hai S ka
// S ko T mai change karna hai by removing elements
// k apne ko aisa lena hai jisse tranform bhi ho jaye aur k sabse smallest bhi ho
// toh jo elemets hataye hai unka agar apan lcm le le toh abat khatam

// Approach
// Apne ko har baar aisa number choose karna hai jo T set mai jo numbers chaiye unko na hata de
// Ye karne ke liye har baar

// Test Cases
// 2 3 5 7
// 2 + 3 + 5 + 7 = 17
// 3 4 8 9 11 14 15
// 3 + 4 + 4 + 9 + 11 + 14 + 15 = 60

// 1 2 4
// 1 + 2 + 2

// Primes sare add honge
// ok toh sort karke jo sequence wali multiples hai vo lene hai for example if 3 nhi chaiye then check kar 6 aur 9 ... bhi nhi chaiye

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    vector<int> removed;
    unordered_set<int> required;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '0')
        {
            removed.push_back(i + 1);
            required.insert(i + 1);
        }
    }
    sort(removed.begin(), removed.end());
    int total = 0;
    unordered_set<int> set;
    // 1 2 3 4 
    // set -> 1 , 
    // required -> 1 2 3 4
    // removed -> 1 2 3 4
    for (int i = 0; i < removed.size(); i++)
    {
        if (set.find(removed[i]) != set.end())
        {
            int first = removed[i];
            int start = 2*removed[i];
            for (int j = start; j <= n; j += removed[i])
            {
                if (required.find(j) != required.end())
                {
                    if(set.find(j) == set.end()){
                        set.insert(j);
                        total += first;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            set.insert(removed[i]);
            total += removed[i];
            int start = 2*removed[i];
            int first = removed[i];
            for (int j = start; j <= n; j += removed[i])
            {
                if (required.find(j) != required.end())
                {
                    if(set.find(j) == set.end()){
                        set.insert(j);
                        total += first;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout << total << endl;
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