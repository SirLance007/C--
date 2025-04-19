#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini = arr[0];
    int miniIndex = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 2*i && arr[i] > 2*(n-1-i))
        {
            continue;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
