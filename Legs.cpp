#include<iostream>
using namespace std;
int main(){
    int t,n,i=0;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        int sum = 0;
        if(n/4 > 0){
            sum = sum + n/4;
            n = n%4;
        }
        if(n/2>0){
            sum = sum + n/2;
        }
        cout<<sum<<endl;
    }
    return 0;
};