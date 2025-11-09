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

// Observations
// adding perm to array and finding most freq
// ek array given hai usmai se most freq nikalana hai after adding some permutatiosn in the array
// need to find maximum subarray with same diffrence between adjacent elemetns

// Edge cases
// maxi diffrence we can accept = n-1

// Approach 
// first we will take distinct elements array
// now we will check the min diffrence is 1 and maxi diff = n-1
// nwo we will iterate over the array and check if they lie between the max and min range 
// we will take the len of the array followig this pattern maximum

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    sort(ans.begin() , ans.end());
    int mini = 1;
    int maxi = n;
    unordered_set<int> st;
    vector<int> dist;
    for(int i = 0; i < n ; i++){
        if(st.find(ans[i]) == st.end()){
            dist.push_back(ans[i]);
            st.insert(ans[i]);
        }
    }
    int left = 0;
    int op = 0;
    for(int i = 0; i < dist.size() ; i++){
        while(dist[i] - dist[left] >= maxi ){
            left++;
        }
        op = max(op , i-left+1);
    }
    cout << op << endl;
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

// 1 4 7
// 