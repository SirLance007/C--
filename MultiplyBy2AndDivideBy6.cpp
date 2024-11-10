#include <iostream>
using namespace std;

int main()
{
    long long n;
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int count = 0;
        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
            }
            else if (n % 3 == 0)
            {
                n = n * 2;
            }
            else
            {
                count = -1;
                break;
            }
            count++;
        }
        cout << count << endl;
    }
}