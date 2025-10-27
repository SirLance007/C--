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

// Observation
// Sare zeroes ko kisi chee mai conver karna hai
// agar ek zeroes se jada hai toh just do zeroes ko mila do 
// and uske baad 
// first we will make continuous zeroes 1
// if we have individual zeroes then pair them with the next 
// then apan unke adjacent se le lege and we will make them one
// uske baad we will take the whole array at last

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    // First we will remove continuous zeroes
    while(ans.size() > 1){
        // check if continuous zeroes exist
        int count = 0;
        int left = 0;
        for(int i = 0; i < n ; i++){
            if(ans[i] == 0){
                left = i+1;
                count++;
            }
            else{
                cout << left << " " << i << endl;
                count = 0;
            }
        }
    }
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

