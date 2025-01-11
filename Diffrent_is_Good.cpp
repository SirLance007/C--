#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string st ;
    cin >> st;
    unordered_map<char,int> mp;
    for(int i = 0; i < n;i++){
        mp[st[i]]++;
    }
    int count = 0;
    for(auto& pair : mp){
        if(pair.second > 1){
            count += pair.second-1;
        }
    }
    cout << count << endl;
}