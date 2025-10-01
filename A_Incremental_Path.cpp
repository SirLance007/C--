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

// Inititally m things are black and others are white
// A -> jump to next cell
// B -> jump to closest white cell
// colors the last visited cell black as it obeys the commands
// print the black colors one in increasing order
// there are 10 raise to the power 9 cells so we cant traverse that

// So basically we need to know ki har index ke liye sabse close white point konsa hai
// So har b ke liye jab tak next b nhi ata next white
// so har sequence would be like
// A B A B B
// black -> 1 7
// A -> 2
// A B -> 3
// A B A -> 5
// A B A B -> 6
// A B A B B -> 9

// so just that ki prefix sum of
// Ek b se dusre b ke beechma jitne bhi a apan unko black color kar sakte hai
// and har b naya index batayega
// 

// Approach
// last b ne kha par choda tha vo ayega ek toh
// uske aage se index
// void solve(){
//     int n , m;
//     cin >> n >> m;
//     string st;
//     cin >> st;
//     set<int> black;
//     vector<int> ans;
//     for(int i = 0; i < m ; i++){
//         int x;
//         cin >> x;
//         black.insert(x);
//     }
//     int idx = 1;
//     for(int i = 0; i < n ; i++){
//         // case - 1
//         // a
//         if(st[i] == 'A'){
//             if(black.find(idx+1) == black.end()){
//                 black.insert(idx+1);
//             }
//             idx++;
//         }
//         // Case-2
//         // b
//         if(st[i] == 'B'){
//             for(int i = idx+1; i < 1000000000 ; i++){
//                 if(black.find(i) == black.end()){
//                     black.insert(i);
//                     idx = i;
//                     break;
//                 }
//             }
//         }
//         // Case - 3

//     }
//     for(auto x : black){
//         cout << x << " ";
//     }
//     cout << endl;
// }

void solve()
{
    int n, m;
    string s;
    cin >> n >> m >> s;
    set<int> a;
    for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      a.insert(x);
    }
    int cur = 1;
    for (char c: s) {
      cur++;
      if (c == 'B') {
        while (a.count(cur)) cur++;
      }
      a.insert(cur);
      if (c == 'B') {
        while (a.count(cur)) cur++;
      }
    }
    cout << a.size() << '\n';
    for (auto& x: a) cout << x << ' ';
    cout << '\n';
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