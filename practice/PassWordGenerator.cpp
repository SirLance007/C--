#include<bits/stdc++.h>
using namespace std;

void solve(){
    int d , u , l;
    cin >> d >> u >> l;
    char lower = 'a';
    char upper = 'A';
    int digit = 1;
    string ans = "";
    for(int i = 0; i < u ; i++){
        ans += upper;
        upper++;
    }
    for(int j = 0 ; j < lower ; j++){
        ans += lower;
        lower++;
    }
    for(int i = 0; i < d ; i++){
        ans += to_string(digit%10);
        digit++;
    }
    cout << ans << endl;
}

int main(){
    int t;
    while(t-- > 0){
        solve();
    }
}