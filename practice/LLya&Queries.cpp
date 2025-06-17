#include<bits/stdc++.h>
using namespace std;

void solve(string &s , vector<int> &prefix){
    int l , r;
    cin >> l >> r;
    cout << prefix[r-1] - prefix[l-1] << endl;
}

int main(){
    string s;
    cin >> s;
    int t;
    cin >> t;
    vector<int> prefix(s.size(), 0);
    for(int i = 1 ; i < s.size() ; i++){
        prefix[i] = prefix[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }
    while(t-- > 0){
        solve(s , prefix);
    }
}