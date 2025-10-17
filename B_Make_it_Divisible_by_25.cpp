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
// If a number is divisible by 25 that means it is divisible by 

// Last may ya toh 5 ya toh 0 hona chaiye
// so last se jab tak we are not getting 0 or 5 we need to remove
// har cheze its like 
// 25 50 75 00
// 125 150 175 200
// so its like we dont care aage kya aa rha hai 
// if we have in string 25 , 50 , 75 or 00 at last ok go for it
// so agar last mai se last wala jo milta ahi agar vo 0 then we need to find either next 0 or five
// and if we get 5 from last we need to find either 7 or 2

// 130505

void solve(){
    string st;
    cin >> st;
    // check from last
    int remove = 0;
    for(int i = st.size()-1 ; i>= 0 ; i--){
        if(st[i] == '5' || st[i] == '0'){
            // need to find next 7 or 2
            // if(st[i] == '5'){
            //     for(int i = 0; i < n )
            // }
        }
        else{
            remove++;
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