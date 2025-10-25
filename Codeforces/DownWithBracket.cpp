#include<bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    int count = 0;
    int maxi = INT_MIN;
    for(char c : st){
        if(c == '('){
            count++;
        }
        else{
            count--;
        }
        maxi = max(maxi, count);
    }
    for(int i = 1 ; i < st.size() ; i ++){
        if(st[i-1] == ')' && st[i] == '(' && maxi > 1){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}