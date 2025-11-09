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

// Observation
// 

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
        if(x == 1){
            one++;
        }
        if(x == 2){
            two++;
        }
        if(x == 3){
            three++;
        }
        if(x == 4){
            four++;
        }
    }
    int two_two = two/2;
    int left_two = two%2;
    int one_three = min(one , three);
    int left_one = one-one_three;
    int left_three = three-one_three;
    int one_two = 0;
    if(left_one >= 2 && left_two == 1){
        left_one -= 2;
        one_two = 1;
        left_two --;
    }
    else if(left_one == 1 && left_two == 1){
        left_one--;
        one_two = 1;
        left_two--;
    }
    int one_one = left_one/4;
    int remaing_one = (left_one % 4 != 0 ? 1 : 0);
    int total = four + two_two + one_three + one_two + left_three + one_one + remaing_one + left_two;
    cout << total << endl;
}

int32_t main(){
    fast;
    solve();
    return 0;
}
