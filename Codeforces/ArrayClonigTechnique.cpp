#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    unordered_map<int , int> mp;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        mp[num]++;
    }
    int maxi = 0;
    int maxElement = 0;
    for(auto pair : mp){
        if(pair.second > maxi){
            maxi = pair.second;
            maxElement = pair.first;
        }
    }
    int total = 0;
    while( maxi < n ){
        total++;
        if(2*maxi >= n){
            total += n-maxi;
        }
        else{
            total += maxi;
        }
        maxi = maxi*2;
    }
    cout << total << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}