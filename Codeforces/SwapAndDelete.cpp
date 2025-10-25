#include<bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    int cnt = 0;
    int ones = 0;
    int zeros = 0;
    for(int i = 0; i < st.size() ; i++){
        if(st[i] == '1'){
            ones++;
        }
        else{
            zeros++;
        }
    }
    for(int i = 0; i < st.size() ; i++){
        if(st[i] == '0'){
                if(ones >= 1){
                    ones--;
                }
                else{
                    cnt += st.size()-(i);
                    cout << cnt << endl;
                    return;
                }
        }
        else{
            if(zeros >= 1){
                zeros--;
            }
            else{
                cnt += st.size()-(i);
                cout << cnt << endl;
                return;
            }
        }
    }
    cout << cnt << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}