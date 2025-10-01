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

// Observations:
// values of array mai i div by x jo jo hai unmai se minus karna hai vo i jo y se divisible hai
// maximum possible score nikalna hai ?
// ok toh apne ko score nikalna hai maximum

// Simplify
// kyuki apne ko maximum chaiye toh apne ko values ko aise arrange karna hai jisse hamesha div by x par max values aaye aur div by y pe minimum ayee
// optimal tab niklega jab x pe maximum hoo aur y pe minimum ho agar y pe apan ne koi value set kar di toh apan usko hi rakhege x ke liye bhi agar do divide kar rahe hai toh
// kyuki jo x aur y dono se divide ho rahe hai vo common hai toh vo cancel hi honge toh apan apne bade elements x se divide ke liye bacha kar rakhege
// lekin edha issue ye hai ki n bhut bada hai toh code tle marega
// agar apan x and y ka lcm nikal le toh apne ko ye pata chal jayeg aki least common multiple konsa hai en dono ka
// us lcm ki table mai jo bhi element ayege vo sab en dono se divisible honge
// toh apan vo kitne elements hai vo nikal lege
// abb apne ko x se divisible kitne elements honge vo nikalna hai plus ... y se kitne honge vo bhi nikalna hai
// uske baad we will minus lcm se divide hone wale from both ... uske baad jitne elements bacche dono ke pass unmai se apan sum kargee maximum - sum of minimum
// 7 2 3
// 1 2 3 4 5 6 7
// lcm = 6
// 7/6 -> 1
// 7/2 -> 3
// 7/3 -> 2
// minus -> 2 , 1
// (7 + 6) - (1) => 12

int gcd(int a, int b)
{
    while (b)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int val = lcm(x, y);
    int total_lcm = n / val;
    int total_x = n / x;
    int total_y = n / y;
    total_x -= total_lcm;
    total_y -= total_lcm;
    int sum1 = 0;
    int sum2 = 0;
    int end = n;
    int st = 1;

    if(x == 1 && y == 1){
        cout << 0 << endl;
        return;
    }

    sum1 = total_x * (2*n - total_x + 1) / 2;

    sum2 = total_y * (total_y + 1) / 2;
    
    cout << sum1 - sum2 << endl;
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