#include<bits/stdc++.h>
using namespace std;

void solve(){
    long r , l;
    cin >> r >> l;
    if(l == r){
        cout << 1 << endl;
    }
    else{
        int sum = r;
        int count = 0;
        while(sum <= l){
            sum += count;
            count++;
        }
        cout << count-1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}