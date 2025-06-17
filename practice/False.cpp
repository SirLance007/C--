#include<bits/stdc++.h>
using namespace std;

void solve(){
    int p , n;
    cin >> p >> n;
    vector<int> ans;
    int maxi = 0;
    int index1 =  -1;
    int index2 = 0;
    int count = 0;
    for(int i = 0; i < p; i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    for(int i = 0; i < p ; i++){
        if(ans[i] == 1){
            if(index1 == -1){
                index1 = i;
            }
            index2 = i;
            count++;
        }
    }
    if(index1 == -1){
        cout << "YES" << endl;
        return;
    }
    if((index2+1) - (index1 + 1)+1 <= n){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
    return 0;
}