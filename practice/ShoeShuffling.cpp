#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> ans;
    unordered_map<long long , pair<long long , long long>> mp;
    unordered_map<long long , long long> freq;
    for(int i = 0 ; i < n ; i++){
        long long x;
        cin >> x;
        if(mp.find(x) == mp.end()){
            mp[x].first = i;
            mp[x].second = i;
        }
        else{
            mp[x].second = i;
        }
        freq[x]++;
        ans.push_back(x);
    }
    for(auto pair : mp){
        if(freq[pair.first] == 1){
            cout << -1 << endl;
            return;
        }
    }
    for(int i = 1 ; i < n ; i++){
        if(ans[i] == ans[i-1]){
            cout << i << endl;
        }
        else{
            long long num = ans[i];
            long long index2 = mp[num].second;
            cout << index2+1 << 
        }
    }
    // long long i = 0;
    // while( i < ans.size()){
    //     long long num = ans[i];
    //     long long index1 = mp[num].first;
    //     long long index2 = mp[num].second;
    //     cout << index2+1 << " ";
    //     for(int j = index1 ; j < index2 ; j++){
    //         cout << j+1 << " ";
    //     }
    //     i = index2+1;
    // }
    // for(int i = 0; i < ans.size() ; i++){
    //     long long num = ans[i];
    //     long long index1 = mp[num].first;
    //     long long index2 = mp[num].second;
    //     cout << index2+1 << " ";
    //     for(int j = index1 ; j < index2 ; j++){
    //         cout << j+1 << " ";
    //     }
    // }
    // cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}