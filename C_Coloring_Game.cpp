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

// Observations
// Start -> All colourless 
// Sabse phele alice choose karega aur 3 elements ko ed color kar dega
// uske baad bob choose karega and colors it blue
// Alice tab hi jeetega jab alice color sum > bob ones strictly
// Calculate number of ways 
// ek condition jismai baaki sare elements ka sum ek ke barabar ya usse chtoa rhe gaya toh ans -> 0 Alice hargea hi

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
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