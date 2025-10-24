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

// Observations
// Select and integer and inc ai by 1
// this will cost you bi
// We need to make the array such that any teo possible pairs in the array have a gcd greater than 1
// yani dono ka 1 ke siway bhi factor exist karna chaiye

// Approach
// So ek cheze toh pakki hai ki dono mai se koi bhi prime nhi hona chaiye

// We can get a 3 answers
// 1 -> 0
// 2 - > 1
// 3 - > 2

// Case for 0
// when all the divisiors are already present
// if two val are same and greater than 1
// we got divisor of one 4


#define N 200010
vector<int> divisors[200010];
int freq1[N] = {0} , freq2[N] = {0};
void solve(){
    int n;
    cin >> n;
    vector<int> ans1;
    vector<int> ans2;
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

    vector<int> Pos;
    for(int i = 0; i < n ; i++){
        int x = ans1[i];
        for(auto it : divisors[x]){
            Pos.push_back(it);
            freq1[it]++;
        }
        for(auto it : divisors[x+1]){
            Pos.push_back(it);
            freq2[it]++;
        }
    }
    int ans = 2;
    for(auto it : Pos){
        if(freq1[it] >= 2){
            ans = 0;
        }
        else if(freq1[it] >= 1 && freq2[it] >= 1){
            ans = min(ans , 1*1LL);
        }
    }
    cout << ans << endl;
    for(auto it : Pos){
        freq1[it] = 0;
        freq2[it] = 0;
    }
}

int32_t main(){
    fast;
    
    for(int i = 2; i < 200010 ; i++){
        for(int g = i ; g < 200010 ; g+=i){
            divisors[g].push_back(i);
        }
    }
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}