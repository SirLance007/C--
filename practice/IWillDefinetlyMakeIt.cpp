#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long n , k;
    cin >> n >> k;
    vector<long long> ans;
    for(int i = 0; i < n ; i++){
        long long x;
        cin >> x;
        ans.push_back(x);
    }
    long long value = ans[k-1];
    vector<long long> arr;
    arr = ans;
    sort(arr.begin() , arr.end());
    if(value == arr[n-1]){
        cout << "YES" << endl;
        return;
    }
    unordered_set<long long> st;
    vector<long long> distinct;
    for(int i = 0; i < arr.size() ; i++){
        if(st.find(arr[i]) == st.end()){
            distinct.push_back(arr[i]);
            st.insert(arr[i]);
        }
    }
    long long moment = 0;
    int index = 0;
    for(int i = 0; i < distinct.size() ; i++){
        if(distinct[i] == value){
            index = i;
            break;
        }
    }
    for(int i = index ; i < distinct.size()-1 ; i++){
        if(distinct[i+1] - distinct[i] > value){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" <<endl;
}


int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}
// k = 3
// 3 2 1 4 5
// 1 2 3 4 5
// index => 1 , moment => 1 , next => 1 , new_moment = 1 
// index => 2 , moment => 1 , next => 1 , new_moment = 1
