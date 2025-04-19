#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n ; i++){
        string st;
        cin >> st;
        if(st[1] == '+'){
            sum++;
        }
        else{
            sum--;
        }
    }
    cout << sum << endl;
    return 0;
}