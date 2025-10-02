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

#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Problem Statement
// n quests hai 
// Rules hai to complete quests
// 1st is always available for completion 
// ith quest is available if i se sare chote wale completed ho 
// same quests ko vo multiple time kar sakta hai complete
// first completion of ith quests we will get ai points 
// agar dubara vhi karege toh bi point milege
// jada se jada vo k quests hi complete kar sakta hai 
// maximum points he can earn

// Observations
// agar kisi ka next quest ka bi abhi ke bi se kam hai toh we will repeat that index till the last and phir last mai next wale pe jayege 
// Three cases
// agar apne ko next se jada points mil rahe hai move on 
// agar apne ko barab bar mil rahe hai move on
// agar age jada points nhi mil rahe but bi < ai+1 toh k-1 takk bi chalana hai phri ai add kar dena hai

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> points(n), repeat(n);
    for(int i = 0; i < n ; i++) cin >> points[i];
    for(int i = 0; i < n ; i++) cin >> repeat[i];

    int total = 0, best = 0, ans = 0;

    for(int i = 0; i < n && i < k; i++){
        total += points[i];          // complete quest i first time
        k--;                         // one quest used
        best = max(best, repeat[i]); // best repeat among unlocked
        ans = max(ans, total + best * k);
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