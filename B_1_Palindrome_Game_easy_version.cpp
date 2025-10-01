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

// Samajhne wali cheze
// 1 -> agar har baar alice phele chalgea aur 0 ko 1 karega toh vo palindrom nhi raehgi
// 2 -> jha par bhi alice 1 lagayega uske according hi bob bhi lagayega jisse use reverse na karni pade
// 3 -> Toh agar dhang se dekha jaye toh agar string odd hai toh alice jeet sakti hai kyuki vo ek dum beechwale pe 1 laga degi agar vha 0 hai toh jisse phir bob ko dusri jagah lagan padega jisse vo palindrom nhi bandegi
// 4 -> agar string even hai toh bob hi jeetega kyuki alice jha par bob lagayega 1 ko jisse use reverse na karni pade
// 5 -> aur agar odd hai toh single nhi honi chaiye plus beechwale pe 0 hona chaiye nhi toh alice haar jayegi

// Obervations:
// 1 -> Make 0 to 1 if possible -> pay 1 dollar
// 2 -> You can reverse string if you want but piche wale ne reverse nhi kari honi chaiye or ye plindrom na ho -> pay 0 dollars
// 3 -> Game end tab hoga jab sare 1 ho jayege
// 4 -> Jisnami kam dollars use kare jo jitnega nhi toh tie ho jayega

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '0')
        {
            zero++;
        }
    }
    if (n == 1)
    {
        if (st[0] == '0')
        {
            cout << "BOB" << endl;
            return;
        }
        else
        {
            cout << "ALICE" << endl;
            return;
        }
    }
    if (n % 2 == 0)
    {
        if (zero == 0)
        {
            cout << "ALICE" << endl;
            return;
        }
        if (zero % 2 == 0)
        {
            cout << "BOB" << endl;
            return;
        }
    }
    else
    {
        int mid = n / 2;
        if (st[mid] == '0')
        {
            if(zero == 1){
                cout << "BOB" << endl;
                return;
            }
            cout << "ALICE" << endl;
            return;
        }
        else
        {
            cout << "BOB" << endl;
            return;
        }
    }
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