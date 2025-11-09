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

// So now we have 3 things to maintain 
// 1. jo bhi array dege usmai largest longest subsequence aisa choose karna hai 
// a> uski jo length hai usi ke apan n se jada plaindromes bana paye
// n -> 1 2 3 4 5 1
// longest palindrome
// 

void solve(){
    int n;
    cin >> n;
    if(n%2 == 0){
        int first = 1;
        int second = 2;
        for(int i = 0; i < n/2 ; i++){
            cout << 1 << " ";
            cout << 2 << " ";
        }
        cout << endl;
    }
    else{
        for(int i = 0; i < n/4 ; i++){
            cout << 1 << " ";
            cout << 2 << " ";
        }
        cout << 3 << " ";
        for(int i = 0; i < n/4 ; i++){
            cout << 1 << " ";
            cout << 2 << " ";
        }
        cout << endl;
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