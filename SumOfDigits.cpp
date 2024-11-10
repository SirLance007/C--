#include<iostream>
using namespace std;
int sumOfDigits(long n){
    long sum = 0;
    while(n!=0){
        long digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}
int main(){
    long n;
    cin >> n;
    long count = 0;
    long sum = 0;
    if(n/10 == 0){
        return 0;
    }
    while(n/10 != 0){
        long sum = sumOfDigits(n);
        n = sum;
        count++;
    }
    cout << count << endl;
}