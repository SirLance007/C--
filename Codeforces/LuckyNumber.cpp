#include<bits/stdc++.h>
using namespace std;

void main(){
    int l , r;
    cin >> l , r;
    int maxi = 0;
    for(int i = l ; i <= r; i++){
        string ans = to_string(i);
        sort(ans.begin(),ans.end());
        if(maxi < ((ans[ans.size()-1] - '0') - (ans[0] - '0'))){
            maxi = i;
        }
    }
    cout << maxi << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}