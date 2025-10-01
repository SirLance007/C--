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
using namespace std;

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// observations
// 3 values leni hai unko cyclic tarike se right ya left karna hai
// abb apne ko chaiye ki sare 1 last mai ayye or zero first par
// right shift mtlb jo bhi 3 element liye hai 
// 1 0 1 0 1 1
// left shift => 1 0 1 => 1 0 1 0 1 1
// right shift => 1 , 3 , 4 => 0 0 1 1 1 1
// simple nikalna hai ki konsa one apni jagah nhi hai
void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    int one = 0;
    for(int i = 0; i < st.size() ; i++){
        if(st[i] == '1'){
            one++;
        }
    }
    int count = 0;
    for(int i = st.size()-1 ; i >= st.size()-one ; i--){
        if(st[i] == '0'){
            count++;
        }
    }
    cout << count << endl;
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