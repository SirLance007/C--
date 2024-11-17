#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr{t};
    int count = 0;
    for (int j = 0; j <= t; j++)
    {
        cin >> arr[j];
        for (int i = 1; i <= t; i++)
        {
            if (t % i == 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}