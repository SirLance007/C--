// Hare Krishna
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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a, int b){
    while(b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b){
    return a / gcd(a,b) * b;
}

void solve(){
    int a,b,c,m;
    cin >> a >> b >> c >> m;

    int AB = m / lcm(a,b);
    int AC = m / lcm(a,c);
    int BC = m / lcm(b,c);

    int ABC = m / lcm(lcm(a,b),c);

    int A = m/a;
    int B = m/b;
    int C = m/c;

    int A_only = A - AB - AC + ABC;
    int B_only = B - AB - BC + ABC;
    int C_only = C - AC - BC + ABC;

    int AB_only = AB - ABC;
    int AC_only = AC - ABC;
    int BC_only = BC - ABC;

    int alice = A_only*6 + AB_only*3 + AC_only*3 + ABC*2;
    int bob   = B_only*6 + AB_only*3 + BC_only*3 + ABC*2;
    int carol = C_only*6 + AC_only*3 + BC_only*3 + ABC*2;

    cout << alice << " " << bob << " " << carol << endl;
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}