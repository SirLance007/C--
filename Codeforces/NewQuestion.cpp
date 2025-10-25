#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    
    string a;
    cin >> a;

    vector<int> ans(m);
    vector<int> index;
    for(int i = 0; i < m; i++){
        cin >> ans[i];
    }

    string c;
    cin >> c;
    sort(c.begin(),c.end());
    unordered_map<int , char> mp;
    unordered_set<int> st;
    for(int i = 0; i < m ; i++){
        if(st.find(ans[i]) == st.end()){
            index.push_back(ans[i]);
            st.insert(ans[i]);
        }
    }
    sort(index.begin(),index.end());
    for(int i = 0; i < index.size(); i++){
        mp[index[i]-1] = c[i];
    }
    string result = a;
    int last = index[index.size()-1];
    for(int i = 0; i <= n ; i++){
        if(mp.find(i) != mp.end()){
            result[i] = mp[i];
        } else {
            result[i] = a[i];
        }
    }

    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
