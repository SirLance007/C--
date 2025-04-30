#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    int count = 0;
    for(int i = 0; i < n ; i++){
        ans += st[i];
        if(ans.size() == st.size()){
            if(ans == "map" || ans == "pie"){
                count++;
                ans[2] = 'k';
            }
            ans.erase(0,1);
        }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}