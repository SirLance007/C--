#include<bits/stdc++.h>
using namespace std;

void solve(){
    string st;
    cin >> st;
    vector<int> ans;
    for(int i = 0; i < st.size() ; i++){
        ans.push_back(st[i] - '0');
    }
    int mini = *min_element(ans.begin() , ans.end());
    cout << mini << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }

}