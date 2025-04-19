#include<bits/stdc++.h>
using namespace std;

void solve(int i){
    int ans = 0;
    int n = i;
    while(n != 0){
        int k = n % 10;
        ans = ans * 10 + k;
        n = n / 10;
    }
    if(ans == i){
        cout << i << endl;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        solve(i);
    }
    return 0;
}
