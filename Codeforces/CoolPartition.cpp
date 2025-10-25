#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 1;
    unordered_set<int> st1;
    unordered_set<int> st2;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    st1.insert(a[0]);
    int i = 1;
    while(!st1.empty() && i < n){
        st2.insert(a[i]);
        if(st1.find(a[i]) != st1.end()){
            st1.erase(a[i]);
        }
        if(st1.empty()){
            count++;
            st1 = st2;
            st2.clear();
        }
        i++;
    }
    cout << count << endl;
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}