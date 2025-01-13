#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int pointA = 0;
    int pointB = 0;
    for (int j = 0; j < 8; j++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < 8; i++)
        {
            if (s[i] == 'Q')
            {
                pointA += 9;
            }
            else if (s[i] == 'R')
            {
                pointA += 5;
            }
            else if (s[i] == 'B')
            {
                pointA += 3;
            }
            else if (s[i] == 'N')
            {
                pointA += 3;
            }
            else if (s[i] == 'P')
            {
                pointA += 1;
            }
            else if (s[i] == 'q')
            {
                pointB += 9;
            }
            else if (s[i] == 'r')
            {
                pointB += 5;
            }
            else if (s[i] == 'b')
            {
                pointB += 3;
            }
            else if (s[i] == 'n')
            {
                pointB += 3;
            }
            else if (s[i] == 'p')
            {
                pointB += 1;
            }
        }
    }
    if (pointA > pointB)
        {
            cout << "White" << endl;
        }
        else if(pointA == pointB){
            cout << "Draw" << endl;
        }
        else
        {
            cout << "Black" << endl;
        }
}

int main()
{
    solve();
}