#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    string result = "";
    for(int i = n-1; i>= 0; i--){
        if(ans[i] == 'a' || ans[i] == 'e'){
            result += ans[i];
            i--;
            result += ans[i];
            i--;
            result += ".";
        }
        else{
            result += ans[i];
            i--;
            result += ans[i];
            i--;
            result += ans[i];
            i--;
            result += ".";
        }
    }
    reverse(result.begin(),result.end());
    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}