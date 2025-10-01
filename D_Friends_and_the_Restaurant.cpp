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
// Requirments
// 1. Jo bhi pair banao usmai se maximum pair ke liye jada se jada 2 ka hi group banao
// 2. hamesha budget > byers
// 
// steps
// phele pair banao values ka 
// phir unko sort karo 
// pair mai phele budget phir byers ayege
// sort karne ke baad pair banao phele 
// plan mai change hai unka diff ko sort karo
// uske baad two pointerns use kar lo


void solve(){
    int n;
    cin >> n ;
    vector<int> burles;
    vector<int> budget;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        burles.push_back(x);
    }
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        budget.push_back(x);
    }
    vector<int> diff;
    for(int i = 0; i < n ; i++){
        diff.push_back(budget[i] - burles[i]);
    }
    sort(diff.begin() , diff.end());
    int ans = 0;
    int i = 0;
    int j = n-1;
    while(i < j){
        if(diff[i] + diff[j] >= 0){
            ans++;
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    cout << ans << endl;
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