#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    vector<int> result;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            result.push_back(arr[i]);
        }
    }
    sort(result.begin(), result.end());
    for (int i = 0; i < n && k > 0; i++)
    {
        sum += result[i];
        k--;
    }
    cout << abs(sum) << endl;
}