#include<iostream>
using namespace std;

int main(){
    int t,n,a,b;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        cin >> a;
        cin >> b;
        int sum = 0;
        for(int j = a; j<=b; j++){
            sum = sum + j*j;
        }
        cout << sum << endl;
    }
}