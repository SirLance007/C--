#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    int two = 0;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        ans.push_back(num);
        if(num == 2){
            two++;
        }
    }
    if( two == 0 ){
        cout << 1 << endl;
    }
    if( two%2 != 0){
        cout << -1 << endl;
        return;
    }
    int newtwo = 0;
    if( two%2 == 0){
        for(int i = 0; i < n ; i++){
            if(ans[i] == 2){
                newtwo++;
                two--;
            }
            if(newTwo == two){
                cout << i+1 << endl;
            }
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
