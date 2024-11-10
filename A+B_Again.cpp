#include <iostream>
using namespace std;

int removeZeroes(int num) {
    int result = 0;
    int place = 1;

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            result += digit * place;
            place *= 10;
        }
        num /= 10;
    }

    return result;
}

int main()
{
    int a,b;
    cin >>a ;
    cin >> b;
    int num1 = removeZeroes(a);
    int num2 = removeZeroes(b);
    int sum = a+b;
    int num3 = removeZeroes(sum);
    if((num1+num2)  == num3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
