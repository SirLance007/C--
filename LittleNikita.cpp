#include<iostream>
using namespace std;

int main(){
    int t,n,m;
    cin >> t;
    for(int i = 0; i <t ;i++){
        cin >> n;
        cin >> m;
        int extraCubes = n-m;
        if(m>n){
            cout << "No" << endl;
        }
        else if( n == m ){
            cout << "Yes" << endl;
        }
        else if(extraCubes % 2 == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}