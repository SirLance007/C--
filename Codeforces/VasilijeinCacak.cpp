#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    unordered_set<int> st;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        st.insert(num);
    }
    cout << st.size() << endl;
    
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}