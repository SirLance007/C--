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

// We would make every possible white box to black
// But it should follow no three consecutive blacks


void solve(){
    int n , x;
    cin >> n >> x;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    sort(ans.begin() , ans.end());
    int sum = 0;
    int result = 0;
    vector<int> pos;
    int left = 0;
    int right = n-1;
    while(left <= right){
        int need = x - (sum%x);
        
        if(ans[right] >= need){
            sum += ans[right];
            result += ans[right];
            pos.push_back(ans[right]);
            right--;
        }
        else{
            sum += ans[left];
            pos.push_back(ans[left]);
            left++;
        }
    }
    cout << result << endl;
    for(auto it : pos){
        cout << it << " ";
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