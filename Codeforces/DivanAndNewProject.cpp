#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    unordered_map<int , int> mp;
    unordered_map<int , int> keys;
    unordered_set<int> st;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> result ;
    result = ans;
    sort(ans.begin() , ans.end());
    int middle = n/2;
    if(n%2 != 0){
        int first = middle+1;
        int second = 1;
        for(int i = n-1 ; i >= 0 ; i = i-2){
            mp[first] = ans[i];
            first++;
        }
        for(int i = 1; i < n ; i += 2){
            mp[second] = ans[i];
            second++;
        }
        for(auto pair : mp){
            keys[pair.second] = pair.first;
        }
        cout << middle << " ";
        for(int i = 1; i <= n ; i++){
            for(auto pair : mp){
                if(pair.second == 10 && st.find(pair.first) == st.end()){
                    cout << pair.first << " ";
                }
            }
        }
        cout << endl;
    }
    else{
        cout << 1 <<endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}