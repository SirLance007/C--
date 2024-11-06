#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        int count = 0;
        if(n%3 == 1 || n%3 == 2){
            cout << "First"<<endl; 
        }
        else{
            cout << "Second"<<endl;
        }
    }
}