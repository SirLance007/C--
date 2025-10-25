#include<bits/stdc++.h>
using namespace std;

void digits(string st , vector<long long> &ans){
    ans.clear();
    for(int i = 0;  i < st.size() ; i++){
        if(st[i] != '0'){
            ans.push_back(st[i]-'0');
        }
    }
}

void solve(){
    string st;
    cin >> st;
    int flag = 1;
    vector<long long> ans;
    long long num = stoll(st);
    long long mini = INT_MAX;
    while(flag == 1){
        digits(to_string(num) , ans);
        bool op = true;
        for(int i =  0 ; i < ans.size() ; i++){
            if(num % ans[i] != 0){
                num++;
                op = false;
                break;
            }
        }
        if(op != false){
            flag = 0;
        }
    }
    cout << num << endl;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}