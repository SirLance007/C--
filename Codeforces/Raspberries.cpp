#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    if( k == 2){
        for(int i = 0; i < n ; i++){
            if(ans[i] % 2 == 0){
                cout << "0" << endl;
                return;
            }
        }
        cout << "1" << endl;
    }
    else if( k == 3 ){
        int mini = INT_MAX;
        for(int i = 0; i < n ; i++){
            if(ans[i] % 3 == 0){
                cout << "0" << endl;
                return;
            }
            else{
                int div = ans[i]/3;
                int diff = (div+1)*3 - ans[i];
                mini = min(diff , mini);
            }
        }
        cout << mini << endl;
    }
    else if( k == 4){
        int two = 0;
        int mini = INT_MAX;
        for(int i = 0; i < n ; i++){
            if(ans[i] % 2 == 0){
                two++;
                if(two == 2){
                    cout << "0" << endl;
                    return;
                }
            }
            if(ans[i] % 4 == 0){
                cout << "0" << endl;
                return;
            }
            else{
                int div = ans[i]/4;
                int diff = (div+1)*4 - ans[i];
                mini = min(diff , mini);
            }
        }
        int rem = 2 - two;
        cout << min(mini , rem) << endl;
    }
    else if( k == 5 ){
        int mini = INT_MAX;
        for(int i = 0; i < n ; i++){
            if(ans[i] % 5 == 0){
                cout << "0" << endl;
                return;
            }
            else{
                int div = ans[i]/5;
                int diff = (div+1)*5 - ans[i];
                mini = min(diff , mini);
            }
        }
        cout << mini << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}