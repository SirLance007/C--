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

// Blanks ko non neg elements se fill karna hai
// abs value of sum 
// ok we need to choose the blank spaces such that vo close to zero rahe har samay
// least we could add is 0 
// so agar prefix abhi tak neg hai add the same value in the array otherwise 0
// ok now the array we have created will follow a rule like for array b where every element should be bi = ai+1 + ai

// bi = ai+1 - ai
// Test case
// 2 -1 1 5 11 12 1 -1
// 2 0 1 5 11 12 1 

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> num (n , 0);
    for(int i = 0; i < n ; i++){
        if(ans[i] != -1){
            num[i] = ans[i+1] - ans[i];
        }
    }
    for(int i = 0; i < n ; i++){
        if( i == 0 ){
            if(num[0] == -1){
                num[0] = 0;
            }
        }
        else if(num[i] == -1){
            if(num[i-1] >= 0){
                num[i] = 0;
            }
            else if(num[i-1] < 0){
                num[i] = abs(num[i-1]);
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += num[i];
    }
    cout << sum << endl;
    for(int i = 0; i < n ; i++){
        cout << num[i] << " ";
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