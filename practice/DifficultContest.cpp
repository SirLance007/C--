#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

void solve()
{
    string st;
    cin >> st;
    sort(st.begin(), st.end());
    reverse(st.begin(), st.end());
    cout << st << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
