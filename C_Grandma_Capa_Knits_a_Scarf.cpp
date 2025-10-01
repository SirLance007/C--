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
using namespace std;

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observations
// beautiful scarf -> plaindrome string
// pattern change karn ahai
// ek leter choose karegi aur uske occureence hata degi kitne bhi ho
// minimize the remove eleemnt
// we need two pointers at start aur at end
// abb apne ko check karn ahai ki konsa eleemnt hatana hai agar do element alag alag aye hai toh
// abb hatega toh unmai se hi ek
// toh apan ek baar sare ek ke elemtns hata kar dekehegeg aur ek baaar ek ke

// to remove toh first aur second mai se hi hoga ye apne ko pata hai
// agar apan first ko hatayege toh apne ko first ki jagah second chaiye

// Test cases
// khyyhhyhky
// left        right
// k -> 1.     k -> 1
// h -> 2.     h -> 2
// y -> 2.     y -> 2
// Agar count same hai eska mtlb arrangment hi glt hai

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int st = 0;
    int end = n - 1;
    bool found = false;
    char first;
    char second;
    unordered_map<char, int> mp;
    while (st < end)
    {
        if (str[st] != str[end] && !found)
        {
            first = str[st];
            second = str[end];
            found = true;
            // cout << "First : " << first << endl;
            // cout << "Second : " << second << endl;
        }
        st++;
        end--;
    }
    int remove1 = 0;
    st = 0;
    end = str.size() - 1;
    int flag1 = 0;
    int flag2 = 0;
    while (st < end)
    {
        if (str[st] != str[end])
        {
            if (str[st] != first && str[st] != second && str[end] != first && str[end] != second)
            {
                cout << -1 << endl;
                return;
            }
            if (str[st] == first)
            {
                remove1++;
                st++;
            }
            else if (str[end] == first)
            {
                remove1++;
                end--;
            }
            else
            {
                flag1 = 1;
                break;
            }
        }
        else
        {
            st++;
            end--;
        }
    }
    int remove2 = 0;
    st = 0;
    end = str.size() - 1;
    while (st < end)
    {
        if (str[st] != str[end])
        {
            if (str[end] != first && str[end] != second && str[st] != first && str[st] != second)
            {
                cout << -1 << endl;
                return;
            }
            if (str[st] == second)
            {
                remove2++;
                st++;
            }
            else if (str[end] == second)
            {
                remove2++;
                end--;
            }
            else
            {
                flag2 = 1;
                break;
            }
        }
        else
        {
            st++;
            end--;
        }
    }
    if(flag1 == 1 && flag2 == 1){
        cout << -1 << endl;
        return;
    }
    if (flag1 == 0 && flag2 == 0)
    {
        cout << min(remove1, remove2) << endl;
    }
    else if (flag1 == 0)
    {
        cout << remove1 << endl;
    }
    else if (flag2 == 0)
    {
        cout << remove2 << endl;
    }
    // else
    // {
    //     cout << -1 << endl;
    // }
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