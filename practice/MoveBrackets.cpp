#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    stack<char> st;
    for(int i = 0; i < str.size() ; i++){
        if(st.empty()){
            st.push(str[i]);
        }
        else if(st.top() == '(' && str[i] == ')'){
            st.pop();
        }
        else{
            st.push(str[i]);
        }
    }
    cout << st.size()/2 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}