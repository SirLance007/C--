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

// 3 2
// 4 1
// 5 0

// 6 + 4 + 4 + 9
// 15 + 4
// 19 
// 

// N logo ne usko tower gift kiya
// height of the tower from the ith person is ai
// beauty -> max(of ai)
// ai and aj should be odd and ai > 0
// then decrease ai by 1 and inc aj by 1
// off sum -> odd + even 
// then we need one odd and one even always
// so if there is one even and one odd we could imply any number of times the operation
// sabse bada even 
// and sabse bada odd
// odd + even
// ek even ya odd ko use karne ke baad we 

// Observations
// ek odd or ek even ko apan kini baar bhi use kar sakte hai 
// one odd anf one even would become 
// odd + even -> odd
// now why dont we make as much as even possibles
// and we could do that by 

// i think we shoud 
// 9 , 5 , 9
// 9 9 5
// 9 + 8 + 4
// 2 2
// 1 1
// 2 2
// 1 + 2 + 2

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    vector<int> odd;
    vector<int> even;
    int total = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        if(x%2 == 0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
        total += ans[i];
    }
    if(even.size() == 0 || odd.size() == 0){
        sort(ans.begin() , ans.end());
        cout << ans[n-1] << endl;
        return;
    }
    cout << total - odd.size() + 1 << endl;
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