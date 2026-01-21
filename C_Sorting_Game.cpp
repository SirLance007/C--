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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
// A valid sequence would be
// first all ones and after all zeroes
// if no one ans -> bob
// 01 -> ok
// number of 1 0

// ex
// 01011001
// 0101101001
// Bob

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int moves = 0;
    int pos = n-1;
    stack<int> st;
    for(int i = 0; i < n ; i++){
        if(st.empty()){
            st.push(str[i]);
        }
        else if(st.top() == str[i]){
            continue;
        }
        else if(st.top() != str[i]){
            st.push(str[i]);
        }
    }
    string op = "";
    while(!st.empty()){
        op += st.top();
        st.pop();
    }
    reverse(op.begin() , op.end());
    // cout << op << endl;
    for(int i = 1 ; i < op.size() ; i++){
        if(op[i-1] == '1' && op[i] == '0'){
            moves++;
        }
    }
    if(moves%2 != 0){
        cout << "Alice" << endl;
        int count = 0;
        for(int i = 0; i < n ; i++){
            if(str[i] == '1'){
                for(int j = i+1 ; j < n ; j++){
                    if(str[j] == '1'){
                        cout << j-i << endl;
                        cout << i+1 << " " << j << endl;
                        return;
                    }
                }
                cout << n-i << endl;
                cout << i+1 << " " << n << endl;
                return;
            }
        }
    }
    cout << "Bob" << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// 1010
// 1001
// 0011

// 11011000
// 11000011
// 00001111

// 1 0 1 0
// 20 1 2026
