#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    char c;
    string st;
    cin >> n >> c;
    cin >> st;
    vector<char> ans;
    for(int i = 0; i < n; i++){
        ans.push_back(st[i]);
    }
    int cnt = 0;
    int maxi = 0;
    int flag = 0;
    int last = -1;
    
    if(c == 'g'){
        cout << "0" << endl;
        return;
    }
    
    for(int i = 0; i < n; i++){
        if(ans[i] == c && flag == 0){
            flag = 1;     
            cnt = 1;
            last = i;
        }
        else if(ans[i] == 'g' && flag == 1){
            maxi = max(maxi, cnt);
            cnt = 0;
            flag = 0;
            last = -1;
        }
        else if(flag == 1){
            cnt++;
        }
    }
    // rggry
    // maxi = 1;
    // cnt = 1
    // y => 2 , r => 3 ,
    cnt = 1;
    if(last != -1){
        last++;
        while(flag == 1){
            if(ans[last % n] == 'g'){
                maxi = max(maxi, cnt);
                flag = 0;  
            }
            else if(flag == 1){
                cnt++;
            }
            last++;
        }
        cout << maxi << endl;
        return;
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
