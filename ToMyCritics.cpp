#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int t,a,b,c;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> a;
        cin>> b;
        cin >> c;
        if(a+b >= 10 || b+c >= 10 || c+a >= 10 ){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}