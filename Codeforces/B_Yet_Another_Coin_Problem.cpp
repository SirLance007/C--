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

// there are 5 types of coins
// we can use dp to calculate that

int op(vector<int> nums , int idx , int count , int target , int start){
    if(idx >= nums.size()){
        return 0;
    }
    if(target == 0){

    }
    for(int i = start; i < nums.size() ; i++){
        
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(10);
    nums.push_back(15);

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