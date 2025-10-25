#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m , k;
    cin >> n >> m >> k;
    vector<int> list;
    string str = "";
    unordered_set<int> st;
    for(int i = 0; i < m ; i++){
        int x;
        cin >> x;
        list.push_back(x);
    }
    for(int i = 0; i < k ; i++){
        int y;
        cin >> y;
        st.insert(y);
    }
    if(  k == n ){
        for(int i = 0; i < list.size() ; i++){
            str += "1";
        }
        cout << str << endl;
        return;
    }
    else if( k+1 < n ){
        for(int i = 0; i < list.size() ; i++){
            str += "0";
        }
        cout << str << endl;
        return;
    }
    for(int i = 0; i < m ; i++){
        int num = list[i];
        if(st.find(num) == st.end()){
            str += "1";
        }
        else{
            str += "0";
        }
    }
    cout << str << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--  >0){
        solve();
    }
}