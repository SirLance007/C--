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

// Observation
// jo bhi house ko apan protect karege vo 2 moves mai ho jayega and it will spread by i+1
// and baaki sare will spread ya toh by +1 ya phir by +2
// so total points 

void solve(){
    int houses , infected;
    cin >> houses >> infected;

    vector<int> positions(infected);
    for(int i = 0; i < infected ; i++){
        cin >> positions[i];
    }
    sort(positions.begin(), positions.end());

    vector<int> diff(infected);
    for(int i = 1; i < infected ; i++){
        diff[i] = positions[i] - positions[i-1] - 1; // actual gap
    }
    // circular gap
    diff[0] = houses - positions[infected-1] - 1 + positions[0];

    sort(diff.begin(), diff.end());

    int cnt = 0;           // how much infection has spread
    int notInfected = 0;   // houses that remain safe

    for(int i = infected-1; i >= 0; i--){
        diff[i] -= cnt*2; // infection spreads 2 per step
        if(diff[i] <= 0) break;

        if(diff[i] == 1){
            notInfected += 1;
        } else {
            notInfected += (diff[i] - 1);
        }
        cnt += 2;
    }

    cout << houses - notInfected << "\n";
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