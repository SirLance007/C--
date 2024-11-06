#include<iostream>
using namespace std;

int main(){
    long long t,k,n;
    cin >> t;
    for(int i = 0; i<t;i++){
        cin >> n;
        cin >> k;
        if(n % 2 == 0){
            cout << "Yes" << endl;
        }
        else if(n % k == 0){
            cout << "Yes" << endl;
        }
        else if((n-k) % 2 == 0){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}