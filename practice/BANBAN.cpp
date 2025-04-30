#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int total = 0;
    int count = 0;
    if( n == 1 ){
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    if(n%2 != 0){
        for(int i = 0; i <= 3*n ; i+=6){
            total ++;
        }
        cout << total+2 << endl;
        int j = 5;
        for(int i  = 1; i <= 3*n ; i+=6){
        cout << i << " ";
        cout << j << " ";
        j+= 6;
        }
        cout << j+1 << " " << j+3 << endl;
    }
    else{
        for(int i = 0; i <= 3*n ; i+=6){
            total ++;
        }
        cout << total << endl;
        int j = 5;
        for(int i  = 1; i <= 3*n ; i+=6){
            cout << i << " ";
            cout << j << " ";
            j+= 6;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}