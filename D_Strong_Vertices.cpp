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
using namespace std;
#include <climits>

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//
void solve(){
    int n;
    cin >> n ;
    vector<int> ans1;
    vector<int> ans2;
    vector<int> result;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans1.push_back(x);
    }
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans2.push_back(x);
    }
    int maxi = LLONG_MIN;
    int cnt =  0;
    for(int i = 0; i < n ; i++){
        result.push_back(ans1[i] - ans2[i]);
        if(maxi < (ans1[i] - ans2[i])){
            cnt = 0;
            cnt++;
        }
        else if(maxi == (ans1[i] - ans2[i])){
            cnt++;
        }
        maxi = max(maxi , (ans1[i] - ans2[i]));
        
    }
    cout << cnt << endl;
    for(int i = 0; i < n ; i++){
        if(result[i] == maxi){
            cout << i+1 << " ";
        }
    }
    cout << endl;
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