#include<bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    int count = 0;
    for(int i = st.size()-1 ; i >= 0 ; i--){
        if(st[i] != '0'){
            count += n-i+1;
            index = i;
            break;
        }
    }
    for(int i = 0; i <= index ; i++){
        if(st[i] != '0'){
            count++;
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