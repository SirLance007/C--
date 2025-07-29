#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    unordered_map<int, int> mp;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'A')
        {
            a.push_back(i + 1);
        }
        else
        {
            b.push_back(i + 1);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count_a = a.size();
    int count_b = b.size();
}