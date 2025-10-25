#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long mini = LLONG_MAX;
    vector<long long> minis;
    long long total = 0;
    for(int i = 0; i < n ; i++){
        long long s;
        cin >> s;
        vector<long long> v;
        for(int j = 0; j < s ; j++){
            long long m;
            cin >> m;
            v.push_back(m);
            mini = min(mini , m);
        }
        sort(v.begin() , v.end());
        minis.push_back(v[1]);
    }
    sort(minis.begin() , minis.end() , greater<>());
    for(int i = 0; i < minis.size() - 1 ; i++){
        total += minis[i];
    }
    total += mini;
    cout << total << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}