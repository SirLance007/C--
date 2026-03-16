// Hare Krishna
// Code by Prankur Sharma
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <climits>
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    stack<int> st;
    int total = 0;
    int one = 0;
    int zero = 0;
    for(int i = 0; i < n ; i++){
        // if(str[i] == '1'){
        //     one++;
        // }
        // else if(str[i] == '0'){
        //     zero++;
        // }
        if(st.empty()){
            if(str[i] == '1'){
                total += 2;
            }
            else{
                total += 1;
            }
            st.push(str[i] - '0');
        }else if(st.top() == (str[i] - '0')){
            total += 1;
            continue;
        }else{
            total += 2;
            st.push(str[i] - '0');
        }
    }
    // cout << one << endl;
    // cout << zero << endl;
    // return;
    // if(one == 0){
    //     cout << zero << endl;
    //     return;
    // }else if(zero == 0){
    //     cout << one+1 << endl;
    //     return;
    // }
    // cout << total << endl;
    // return;
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin() , ans.end());
    // for(auto it : ans){
    //     cout << it << " ";
    // }
    // cout << endl;
    // return;
    for(int i = 0; i < ans.size() ; i++){
        if(ans[i] == 1){
            one++;
        }else{
            zero++;
        }
    }
    for(int i = 1; i < ans.size()-1; i++){
        if((ans[i-1] == 1 && ans[i] == 0 && ans[i+1] == 1 && one >= 2) || (ans[i-1] == 0 && ans[i] == 1 && ans[i+1] == 0 && one >= 2)){
            cout << total-2 << endl;
            return;
        }
    }
    for(int i = 1; i < ans.size(); i++){
        if(ans[i-1] == 1 && ans[i] == 0){
            cout << total-1 << endl;
            return;
        }
    }
    cout << total << endl;
}

int32_t main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

// 1 0 1 0 -> 2 + 2 + 2 + 2
// 0 1 1 0 -> 1 + 2 + 1 + 2