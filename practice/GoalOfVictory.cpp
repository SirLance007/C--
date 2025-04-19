#include<bits/stdc++.h>
using namespace std;

void solve(){
    int row = 0;
    int total = 0;
    for(int i = 0; i < 10 ; i++){
        row++;
        string st ;
        cin >> st;
        for(int j = 0; j < 10 ; j++){
            if(st[j] == 'X' && row <=2 ){
                total += 1;
            }
            else if(st[j] == 'X' && row <=4 ){
                total += 2;
            }
            else if(st[j] == 'X' && row <=6 ){
                total += 3;
            }
            else if(st[j] == 'X' && row <=8 ){
                total += 4;
            }
            else if(st[j] == 'X' && row <=10 ){
                total += 5;
            }
        }
    }
    cout << total << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}