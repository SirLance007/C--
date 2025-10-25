#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;
    a += b;
    if (a > b && b != 0)
    {
        cout << a - b << endl;
    }
    else
    {
        cout << a + b << endl;
    }
    return 0;
}
