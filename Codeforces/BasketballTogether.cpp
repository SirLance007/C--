#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , d;
    cin >> n >> d; 
    vector<long long> ans;
    long long sum = 0;
    long long cnt = 0;
    long long mini = INT_MAX;
    unordered_set<long long> st;
    for(int i = 0; i < n ; i++){
        long long x;
        cin >> x;
        mini = min(x , mini);
        long long rem = d/x +1 ;
        ans.push_back(rem);
    }
    if(d < mini){
        cout << n << endl;
        return;
    }
    sort(ans.begin() , ans.end());
    for(int i = 0; i < ans.size() ; i++){
        sum += ans[i];
        if(sum > n){
            cout << cnt << endl;
            return;
        }
        cnt++;
    }
    cout << 0 << endl;
}

int main(){
    solve();
}