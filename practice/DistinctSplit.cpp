#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> st1;
    unordered_set<char> st2;
    int index = -1;
    int index2 = -1;
    for(int i = 0; i < n-1 ; i++){
        if(st1.find(s[i]) == st1.end()){
            st1.insert(s[i]);
        }
        else{
            index = i;
            break;
        }
    }
    for(int i = n-1 ; i >= 1 ; i--){
        if(st2.find(s[i]) == st2.end()){
            st2.insert(s[i]);
        }
        else{
            index2 = i;
            break;
        }
    }
    if(st1.size() >= st.size()){
        unordered_set<char> st3;
        for(int i = index+1; i < n; i++){
            st3.insert(s[i]);
        }
        cout << st.size() + st3.size() <<
    }
    
    cout << st1.size() + st2.size() << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}