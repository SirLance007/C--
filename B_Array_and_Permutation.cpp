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

// Operations 
// pi = pi+1
// pi+1 = pi

// eska mtlb har index pe jo value hai uske aage tak apan kisis bhi value ko uske barabar aban sakte hai 
// eska mtlb permuatation ke andar phele occurence har values ka usse phele nhi hona chaiye


// 3 1 2 4
// 3 4 2 2

// ok 
void solve(){
    
    int n;
    cin >> n;

    vector<int> per(n), ans(n);
    for(int i = 0; i < n; i++){
        cin >> per[i];
    }
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }

    unordered_map<int, int> pos;
    for(int i = 0; i < n; i++){
        pos[per[i]] = i;
    }

    stack<int> st;
    for(int i = 0; i < n; i++){
        if(st.empty() || st.top() != ans[i]){
            st.push(ans[i]);
        }
    }


    vector<int> blocks;
    while(!st.empty()){
        blocks.push_back(st.top());
        st.pop();
    }
    reverse(blocks.begin(), blocks.end());

    for(int i = 1; i < blocks.size(); i++){
        if(pos[blocks[i]] <= pos[blocks[i-1]]){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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

