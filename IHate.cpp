#include<iostream>
using namespace std;

int main() {
    int t,n;
    cin >>t;
    for(int i = 0; i<t;i++){
        cin >> n;
        if(n<11){
            cout << "NO" << endl;
        }
        else if( n % 10 == 0){
            cout << "NO" << endl;
        }
        else if(n%10 == (n/10)%10){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}