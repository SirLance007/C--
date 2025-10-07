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
#include <climits>

#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Observation
// so jaha number same hai zeros aur one ka apan vhi hi digits change kar sakte hai vo bhi only prefix one
// jha par last change hai values ka vha par we need to check whether count of 0 and 1 are same or not
// ek pair ko change karne ke liye we need another diffrent pair
// plus the pair should be inverted

// Approach
// So we have certain indices where we can flip the bits
// Ok so sare bits ko flip kar do plus the bits pattern we have

string flip(string s){
    string ans = "";
    for(int i = 0; i < s.size() ; i++){
        if(s[i] == '1'){
            ans += '0';
        }
        else{
            ans += '1';
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    string st1, st2;
    cin >> st1 >> st2;
    int cnt = 0;
    string ans1 = "";
    string ans2 = "";
    for (int i = 0; i < n; i++)
    {
        if (st1[i] == '1')
        {
            cnt++;
            ans1 += st1[i];
            ans2 += st2[i];
        }
        else
        {
            cnt--;
            ans1 += st1[i];
            ans2 += st2[i];
        }
        if (cnt == 0)
        {
            int flag = 0;
            if (ans1 == ans2)
            {
                flag = 1;
            }
            string op = flip(ans2);
            if (ans1 == op)
            {
                flag = 1;
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
                return;
            }
            ans1 = "";
            ans2 = "";
        }
    }
    int flag = 0;
    if (ans1 == ans2)
    {
        flag = 1;
    }
    if(flag == 0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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