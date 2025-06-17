#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int st = 1;
    int end = n;
    if(n % 2 == 0){
        for(int i = 0 ; i < n/2 ; i++){
            cout << st << " ";
            st += 2;
        }
        for(int i = 0 ; i < n/2 ; i++){
            cout << end << " ";
            end -= 2;
        }
        cout << endl;
    }
    else{
        for(int i = 0 ; i < n/2+1 ; i++){
            cout << st << " ";
            st += 2;
        }
        for(int i = 0 ; i < n/2 ; i++){
            cout << end-1 << " ";
            end -= 2;
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}